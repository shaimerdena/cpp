#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    int max = 0;
    for(int i=0; i<str.length(); i++){
        if (int(str[i]) > max)
        {
           max = str[i];
        }
    }
    for(int i=0; i<str.length(); i++){
        if (int(str[i]) == max)
        {
           cout << str[i] << endl;
           return 0;
        }
    }
}
