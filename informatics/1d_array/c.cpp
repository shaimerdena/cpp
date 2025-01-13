#include <iostream>
#include <array>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>0) count += 1;
    }
    cout << count << endl;
    return 0;
}