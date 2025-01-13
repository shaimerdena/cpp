#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int v;
    for(int i=0; i<ceil(n/2); i++){
        v = a[n-i-1];
        a[n-i-1] = a[i];
        a[i] = v;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}