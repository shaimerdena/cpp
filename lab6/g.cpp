#include <iostream>

using namespace std;

void vowel(string str){
    for(int i=0; i< str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            continue;
        }
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            continue;
        }
        cout << str[i];
    }
}

int main(){
    string str;
    getline(cin, str);

    vowel(str);
}