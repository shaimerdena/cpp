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
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        if(i != v[i]){
            cout << i << endl;
            break;
        }
        else if(i == v[n-1]){
            cout << v[n-1] + 1 << endl;
        }
    }
    return 0;
}