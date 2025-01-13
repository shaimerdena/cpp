#include <iostream>

using namespace std;

void numsum(string str, int n){
    int sum = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += 1;
        }
    }
    if(sum >= n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    string str;
    cin >> str;

    int n;
    cin >> n;

    numsum(str, n);
    return 0;
}