#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, r;
    cin >> l >> r;

    bool flag = false;
    for(int i = l; i<=r; i++){
        set<char> s;
        s.clear();
        string num = to_string(i);
        int len = num.length();
        for(int j=0; j < len; j++){
            s.insert(num[j]);
        }
        if(s.size() == len){
            cout << num << endl;
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "Understandable, have a great day" << endl;
    }
    return 0;
}