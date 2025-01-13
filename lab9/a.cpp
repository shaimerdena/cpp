#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

bool sorting(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        // If frequencies are equal, sort lexicographically by word
        return a.first < b.first;
    }
    // Otherwise, sort by frequency in descending order
    return a.second > b.second;
}



int main() {
    map<string, int> m;
    string str;

    while (cin >> str) {
        m[str] += 1;
    }
    vector<pair<string, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), sorting);

    vector<pair<string, int>> :: iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
