#include <iostream>

using namespace std;

void lucky(int n){
    int sum = 0;
    int last = n%10;
    while(n > 0){
        sum += (n % 10);
        n/=10;
    }
    if(sum % last == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main(){
    int n;
    cin >> n;

    lucky(n);
    return 0;
}