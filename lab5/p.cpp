#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(int(str[i]) + 1 > 122){
            str[i] = char((int(str[i]) + 1)%122 + 96);
        }
        else{
            str[i] = char(int(str[i]) + 1);
        }
    }
    cout << str << endl;
    return 0;
}