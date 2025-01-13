#include <iostream>
#include <array>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int v;
    for(int i=0; i<n-1; i+=2){
        v = a[i+1];
        a[i+1] = a[i];
        a[i] = v;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}