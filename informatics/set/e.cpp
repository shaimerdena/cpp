#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<string> s;
    multiset<string> ms;

    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        for(int j=0; j<m; j++){
            string str;
            cin >> str;
            ms.insert(str);
            s.insert(str);
        }
    }
    set<string> ::iterator it;
    vector<string> v;

    for(it = s.begin(); it!=s.end(); it++){
        if(ms.count(*it) == n){
            v.push_back(*it);
        }
    }
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    cout << s.size() << endl;
    set<string> :: iterator k;
    for(k = s.begin(); k!=s.end(); k++){
        cout << *k << endl;
    }
    return 0;
}