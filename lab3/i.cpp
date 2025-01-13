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
    int max = a[0];
    int min = a[0];

    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(a[i] == max){
            a[i] = min;
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }
    return 0;
}