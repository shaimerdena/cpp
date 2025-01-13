#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    if(str1 == str2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
