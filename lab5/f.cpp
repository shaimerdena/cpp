#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    int count = 0;

    for(int i=0; i<str.length(); i++){
        if(str[0] == str[i]){
            count += 1;
        }
    }
    int count1 = 0;
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<str.length(); j++){
            if(str[i] == str[j]){
                count1 += 1;
            }
        }
        if(count != count1){
            cout << "NO" << endl;
            return 0;
        }
        count1 = 0;
    }
    cout << "YES" << endl;
    return 0;
}
