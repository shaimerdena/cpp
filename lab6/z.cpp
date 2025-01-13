#include <iostream>

using namespace std;

void l(string str){
    if(str == "0"){
        cout << "false" << endl;
    }
    else if(str == "1"){
        cout << "true" << endl;
    }
    else{
        cout << str << endl;
    }
}

int main(){
    string str;
    cin >> str;

    l(str);
    return 0;
}