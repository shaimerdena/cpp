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
    long long int max = -10000000000000;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout << max << endl;
    return 0;
}