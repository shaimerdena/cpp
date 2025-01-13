#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++){
        sum += int(str[i]);
    }
    if(sum > 300){
        cout << "It is tasty!" << endl;
    }
    else{
        cout << "Oh, no!" << endl;
    }
    return 0;
}