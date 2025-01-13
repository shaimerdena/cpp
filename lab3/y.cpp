#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        while(a[i]!=0){
            if(a[i]%10==0){
                count += 1;
            }
            a[i] /= 10;
        }
    }
    cout << count << endl;
    return 0;
}