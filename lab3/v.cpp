#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int copy[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        copy[i] = a[i];
    }

    int t;
    cin >> t;

    if(t>=0){
        for(int i=0; i<n; i++){
            if((n-t)<=i){
                a[i+t] = copy[i];
                }
            else{
                a[(i+t)-n] = copy[i];
                }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if((-(t))<=i){
                a[i+(t+n)] = copy[i];
                }
            else{
                a[(i+(t+n))-n] = copy[i];
                }
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " " << flush;
    }
    return 0;
}
