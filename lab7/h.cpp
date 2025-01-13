#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<v.size(); i++){
        int count = 0;
        for(int j=0; j<v.size(); j++){
            if(v[i] == v[j]){
                count += 1;  
                }
        }
        if(count == 1){
            cout << v[i] << endl;
            }
    }
    return 0;
}