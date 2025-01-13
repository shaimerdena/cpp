#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = 0;
            if(i==0){
                a[i][j] = j;
            }
            if(j==0){
                a[i][j] = i;
            }
            if(i==j){
                a[i][j] = i*j;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}