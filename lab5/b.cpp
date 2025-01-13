#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin , str);
    int up = 0;
    int low = 0;
    for(int i=0; i<str.length();i++){
        if(islower(str[i])) low += 1;
        else up+=1;
    }
    cout << low << " " << up << endl;
    return 0;
}