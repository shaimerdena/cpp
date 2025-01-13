#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string abc = "";

    char num[] = {'0','1','2','3','4','5','6','7','8','9'};
    char chr[] = {'A','B','C','D','E','F'};

    while(n>0){
        if((n%16) >= 0 && (n%16) <= 9){
            abc.push_back(num[n%16]);
        }
        else{
            abc.push_back(chr[n%16 - 10]);
        }
        n/=16;
    }
    for(int i = (abc.length()-1); i >= 0; i--){
        cout << abc[i] << flush;
    }
    return 0;
}