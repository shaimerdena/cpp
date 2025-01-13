#include <iostream>

using namespace std;

int main(){
    char a;
    cin >> a;

    if(int(a)>=97 && int(a)<=122){
        cout << char(int(a) - 32) << endl;
    }
    if(int(a)>=65 && int(a)<=90){
        cout << char(int(a) + 32) << endl;
    }
    return 0;
}