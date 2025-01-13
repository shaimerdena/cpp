#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    bool flag = false;
    do{
        string orig = str;
        reverse(orig.begin(), orig.end());
        if(str == orig){
            flag = true;
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            break;
        }
    }while(next_permutation(str.begin(), str.end()));
    if(flag == false){
        cout << "JOJO" << endl;
    }
    return 0;
}