#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset<int> s;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }

    int m;
    cin >> m;

    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        s.insert(num);
    }

    multiset<int> :: iterator it;
    for(it = s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}