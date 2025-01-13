#include <iostream>

using namespace std;

int noc(int a[], int n, int k){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    int avg = sum / n;
    return abs(avg - k);
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << noc(a, n, k) << endl;
}