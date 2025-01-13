#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    int sum1 = 0;
    for(int i=0; i<str.length(); i += 2){
        sum1 += (int(str[i]) - 48);
    }
    int sum2 = 0;
    for(int i=1; i<str.length(); i += 2){
        sum2 += (int(str[i]) - 48);
    }    
    if(sum1 == sum2){
        cout << "YES" << endl; 
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}