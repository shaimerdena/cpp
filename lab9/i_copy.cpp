#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num); // Adds unique elements to the set
    }

    // Copy elements from the unordered_set into a vector
    vector<int> v(s.begin(), s.end());

    // Generate permutations from the unordered set's default order
    do {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end())); // Doesn't require sorting

    return 0;
}
