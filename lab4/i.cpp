#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    if(n%2 == 1){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<(n-j)-1){
                cout << ".";
            }
            else{
                cout << "#";
            }
        }
        cout << endl;
        }    
    }
    else{
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(i<j){
                cout << ".";
            }
            else{
                cout << "#";
            }
        }
        cout << endl;
        }    
    }
    
    return 0;
}
