#include <iostream>

using namespace std;

void sumnum(int n){
    int sum = 0;
    while(n > 0){
        sum += (n%10);
        n/=10;
    }
    cout << sum << endl;
}

int main(){
    int n;
    cin >> n;
    sumnum(n);
    return 0;
}