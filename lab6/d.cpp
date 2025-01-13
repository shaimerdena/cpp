#include <iostream>

using namespace std;

void book(int n, int a[], int m){
    bool flag = false;
    for(int i=0; i<n; i++){
        if(a[i] == m){
            cout << "Yes" << endl;
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "No" << endl;
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;

    book(n, a, m);
}