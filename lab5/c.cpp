#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    char chr;
    cin >> chr;

    int num;
    cin >> num;

    int sum = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i]==chr){
            sum += 1;
        }
    }
    if(sum == num){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}