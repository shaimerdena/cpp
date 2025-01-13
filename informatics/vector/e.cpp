#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int x;
    cin >> x;
    for(int i=0; i<n; i++){
        if(v[i] < x){
            cout << i+1 << endl;
            break;
        }
        if(v[i] == v[n-1]){
            cout << n+1 << endl;
            break;
        }
    }
    return 0;
}