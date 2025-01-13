#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    char c;
    cin >> str;
    cin >> c;

    int first;
    for(int i=0; i<str.length(); i++){
        if(str[i] == c){
            first = i;
            break;
        }
    }
    int last;
    for(int i=str.length()-1; i>=0; i--){
        if(str[i] == c){
            last = i;
            break;
        }
    }
    if(first == last){
        cout << first;
    }
    else{
        cout << first << " " << last;
    }

    return 0;
}