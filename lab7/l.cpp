#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> v1(n);
    for(int i=0; i<n; i++){
        int num = 0;
        for(int j=0; j<v[i].length(); j++){
            if(isdigit(v[i][j])){
                num = 100;
                break;
            }
        }
        for(int j=0; j<v[i].length(); j++){
            if(islower(v[i][j])){
                num += 20;
                break;
            }
        }
        for(int j=0; j<v[i].length(); j++){
            if(isupper(v[i][j])){
                num += 3;
                break;
            }
        }
        v1[i] = num;
    }
    map<string, int> m;
    for(int i=0; i<n; i++){
        m.insert(make_pair(v[i], v1[i]));
    }
    map<string, int> :: iterator it;
    int sum = 0;
    for(it = m.begin(); it!=m.end(); it++){
        if(it->second == 123){
            sum += 1;
        }
    }
    cout << sum << endl;
    for(it = m.begin(); it!=m.end(); it++){
        if(it->second == 123){
            cout << it->first << endl;
        }
    }
}
