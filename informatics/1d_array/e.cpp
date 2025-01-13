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
    for(int i=1; i<n; i++){
        if((a[i] < 0 && a[i-1] < 0) || (a[i] > 0 && a[i-1] >0)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}