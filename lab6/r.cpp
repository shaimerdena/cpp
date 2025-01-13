#include <iostream>
#include <cctype>

using namespace std;

void up(char c){
    if(islower(c)){
        cout << char(c - 32) << endl;
    }
    else{
        cout << c << endl;
    }
}

int main(){
    char c;
    cin >> c;
    
    up(c);
}