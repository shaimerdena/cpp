#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    multimap<int, int> m1;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        m1.insert(make_pair(x,y));
    }
    multimap<int, int> :: iterator it;
    for(it = m1.begin(); it!=m1.end(); it++){
        cout << it->first << " ";
        if(it->first == (it++) -> first){
            if(it->second > (it++)->second){
                int b = (it++) -> second;
                
            }
        cout << it->second;
    }
}


