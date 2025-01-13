#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> copy(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        copy[i] = a[i];
    }

    int t;
    cin >> t;

    t = t % n;

    if(t >= 0) {
        for(int i = 0; i < n; i++) {
            a[(i + t) % n] = copy[i];
        }
    }
    else {
        for(int i = 0; i < n; i++) {
            a[(i + t + n) % n] = copy[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
