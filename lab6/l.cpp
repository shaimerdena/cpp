#include <iostream>

using namespace std;

void cons(string str, int num){
    int max = 0;
    int count = 0;
    string nums = "0123456789";
    for(int i=0; i<str.length(); i++){
        for(int j=0; j<10; j++){
            if(str[i] == nums[j]){
                count += 1;
            }
            else if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)){
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
    }
    if(max >= num){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}

int main(){
    string str;
    cin >> str;

    int num;
    cin >> num;

    cons(str, num);
    
    return 0;
}