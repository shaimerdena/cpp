#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int b[n];

    int sum =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i] = sum;
        sum = 0;
    }

    int min = b[0];
    for(int i=0; i<n; i++){
        if(min > b[i]){
            min = b[i];
        }
    }

    for(int i=0; i<n; i++){
        if(min == b[i]){
            cout << i+1 << endl;    
            return 0;
        }
    }
}