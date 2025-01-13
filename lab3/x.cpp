#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%10 ==7){
            count +=1;
        }
    }
    cout << count << endl;
    return 0;
}