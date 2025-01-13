#include <iostream>

using namespace std;

void even(int n){
    bool flag = true;
    while(n > 0){
        if((n%10)%2 != 0){
            flag = false;
            break;
        }
        n/=10;
    }
    if(flag == false){
        cout << "Not valid" << endl;
    }
    else{
        cout << "Valid" << endl;
    }
}

int main(){
    int n;
    cin >> n;

    even(n);
    return 0;
}