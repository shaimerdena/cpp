#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i=0; i<str.length()-1; i++){
        if(int(str[i]) + 1 == int(str[i+1]) || int(str[i]) == int(str[i+1])){
            continue;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}