#include <iostream>
#include <algorithm>

using namespace std;

void rev(int n, int a[]){
    reverse(a, a+n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    rev(n, a);
    return 0;
}