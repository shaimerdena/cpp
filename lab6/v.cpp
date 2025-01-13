#include <iostream>
#include <algorithm>

using namespace std;

void decToHex(int n){
    string result = "";
    string hexdig = "0123456789ABCDEF"; 
    while(n>0){
        result += hexdig[n%16];
        n/=16;
    }
    reverse(result.begin(), result.end());
    int index = 10000;
    for(int i=0; i<result.length(); i++){
        if(result[i] == 0 && i<10000){
            continue;
        }
        else if(result[i] != 0){
            index = result[i];
            cout << result[i];
        }
    }
}

int main(){
    int n;
    cin >> n;

    decToHex(n);
}