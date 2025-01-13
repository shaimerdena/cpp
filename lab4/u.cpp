#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];  
            if(i==j || i == (n-j)-1 || i==0 || j == 0 || i == (n-1) || j == (n-1)){
                continue;
            } 
            sum += a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i == (n-j)-1 || i==0 || j == 0 || i == (n-1) || j == (n-1)){
                cout << setw(3) << '*';
            } 
            else{
                cout << setw(3) << a[i][j];
            }
        }
        cout << endl;
    }
    cout << sum << endl;
    return 0;
}