#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        int b;
        cin >> b;
        a[i] = b;
    }
    long long int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}