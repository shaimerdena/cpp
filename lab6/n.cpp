#include <iostream>

using namespace std;

void trans(int a[][1000], int n, int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }   
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][1000];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    trans(a, n, m);
    return 0;
}