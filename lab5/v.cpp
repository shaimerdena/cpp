#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(int(str[i]) >= 97 && int(str[i])<=122){
            if(int(str[i]) + 1 > 122){
                str[i] = char((int(str[i]) + 1)%122 + 96);
            }
            else{
                str[i] = char(int(str[i]) + 1);
            }  
        }
        else if(int(str[i]) >= 65 && int(str[i]) <= 90){
            if(int(str[i]) + 1 > 90){
                str[i] = char((int(str[i])+1)%90 + 64);
            }
            else{
                str[i] = char(int(str[i]) + 1);
            }
        }
        else{
            continue;
        }
    }
    cout << str << endl;
    return 0;
}