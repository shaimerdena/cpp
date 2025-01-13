#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    string copy = "";
    for(int i = (str.length()-1); i >= 0; i--){
        copy.push_back(str[i]);
    }
    if(str == copy){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}