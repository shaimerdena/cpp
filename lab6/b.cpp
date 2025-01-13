#include <iostream>

using namespace std;

void minusarr(int a[],int b[],int n){
    for(int i=0; i<n; i++){
        cout << abs(a[i] - b[i]) << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    minusarr(a, b, n);
}