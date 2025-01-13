#include <iostream>

using namespace std;

void isUsual(int n){
    bool flag = true;
    for(int i=2; i<n-1; i++){
        if(n%i==0 && i!=2 && i!=3 && i!=5){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}

int main(){
    int n;
    cin >> n;

    isUsual(n);
}