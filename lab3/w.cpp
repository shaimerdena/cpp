#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string result = "", symbols = "0123456789ABCDEF";
    int n;
    cin >> n;
    while(n != 0){
        result = symbols[n % 16] + result;
        n /= 16;
    }
    cout << result;
    return 0;
}