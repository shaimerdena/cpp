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

    int r;
    cin >> r;
    for(int i=0;i<n-1;i++){
        if(r < a[i] && a[i+1] < r){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}