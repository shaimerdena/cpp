#include <iostream>
#include <string>

using namespace std;

int main(){
    string frg;
    cin >> frg;

    string whole;
    cin >> whole;

    if(whole.length() % frg.length() == 0 || frg.length()==1){
        for(int i=0; i<whole.length(); i+=(frg.length())){
            if(whole.substr(i, frg.length()) != frg){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}