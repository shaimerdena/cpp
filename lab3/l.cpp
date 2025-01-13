#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n];
    int count = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(m == a[i]){
            cout << i << endl;
            count += 1;
            break;
        }
    }
    if(count==0 && m>a[n-1]){
        cout << n << endl;
    }
    if(count==0 && m<a[n-1]){
        for(int i=0; i<n; i++){
            if(m < a[i]){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}