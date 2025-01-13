#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    multiset<int, greater<int>> s1;
    multiset<int> s2;
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0){
            s1.insert(v[i]);
        }
        else{
            s2.insert(v[i]);
        }
    }
    multiset<int, greater<int> > :: iterator i;
    multiset<int> :: iterator j;
    for(i = s1.begin(); i!=s1.end(); i++){
        cout << *i << " ";
    }
    for(j = s2.begin(); j!=s2.end(); j++){
        cout << *j << " ";
    }
    return 0;
}