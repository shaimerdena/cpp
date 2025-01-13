#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int m = (2*n)-1;
    char a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = 46;
            if(j >= ((n-i)-1)){
                a[i][j] = 42;
            }
            if((i+n)-1<j){
                a[i][j] = 46;
            }
            cout << a[i][j];
        }
        cout << endl;
    }
}