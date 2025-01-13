#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    sort(*a, *(a+n));
    reverse(*a, *(a+n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] != a[0][0]){
                cout << a[i][j] << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}