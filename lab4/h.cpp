#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> n >> m;

    int a[n][m];
    int b[n];

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i] = sum;
        sum = 0;
    }
    int max = b[0];
    for(int i=0; i<n; i++){
        if(max < b[i]){
            max = b[i];
        }
    }
    cout << max << endl;
    return 0;
}