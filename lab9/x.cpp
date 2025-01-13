#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());
    do{
        cout << str;
    }while(prev_permutation(str.begin(), str.end()));
    return 0;
}