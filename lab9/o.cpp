#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    bool flag = false;
    do{
        vector<int> v2(n, 0);
        for(int i=0; i<n; i++){
            v2[i] = v[i];
        }
        reverse(v2.begin(), v2.end());
        if(v == v2){
            flag = true;
            for(int i=0; i<n; i++){
                cout << v[i] << " ";
            }
            break;
        }
    } while(next_permutation(v.begin(), v.end()));
    if(flag == false){
        cout << "Impossible" << endl;
    }
    return 0;
}