#include <iostream>

using namespace std;

void low_up(string str){
    for(int i = 0; i < str.length(); i++){
        if(i % 2 == 0 && int(str[i]) >= 96 && int(str[i]) <= 122){
            str[i] = char(str[i] - 32);
        }
        cout << str[i];
    }
}

int main(){
    string str;
    cin >> str;

    low_up(str);
    return 0;
}