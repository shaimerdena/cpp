#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(islower(str[i])){
            str[i] = char(int(str[i])%97 + 65);
        }
    }
    cout << str << endl;
    return 0;
}