#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v1(n);
    vector<int> v2(m);
    
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }

    vector<int> :: iterator it;
    it = unique(v1.begin(), v1.end());
    v1.erase(it, v1.end());

    vector<int> :: iterator k;
    k = unique(v2.begin(), v2.end());
    v2.erase(k, v2.end());

    vector<int> v(v1.size() + v2.size());

    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(i%2 == 0){
            v[i] = v1[count];
        }
        else{
            v[i] = v2[count];
            count += 1;
        }
    }
    
    vector<int> :: iterator c;
    c = unique(v.begin(), v.end());
    v.erase(c, v.end());

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}