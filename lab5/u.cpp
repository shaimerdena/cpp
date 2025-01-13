#include <iostream>
#include <string>

using namespace std;

int main(){   
    char chr;
    cin >> chr;

    string str;
    cin >> str;

    for(int i = 0; i<str.length(); i++){
        if(str[i] == chr){
            continue;
        }
        cout << str[i];
    }
    return 0;
}