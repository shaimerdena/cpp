#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        int b;
        cin >>b;
        a[i] = b;
    }

    reverse(a, a+n);

    for (int i=0; i<n; i++){
        cout << a[i] << endl;
    }
    return 0;
}