#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    int l, r;
    cin >> l >> r;

    cout << str.substr(l, r+1-l) << endl;

    return 0;
}