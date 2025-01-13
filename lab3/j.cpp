#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    long long int sum = 0;
    for(int i=0; i<n; i++){
        if((i+1)>=l && (i+1)<=r){
           sum += a[i];         
        }   
    }
    cout << sum << endl;
    return 0;
}