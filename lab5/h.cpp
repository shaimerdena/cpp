#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    string nums[] = {'0','1','2','3','4','5','6','7','8','9'};

    string copy = "";
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<nums.length(); j++){
            if(str[i] == nums[j]){
                break;
            }
            copy.push_back(str[i]);
        }   
        if(str[i] = ' '){
            cout << copy << endl;
            copy = "";
            continue;
        }
    }
    return 0;
}