#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int numbers = 1;
    int count = 0;
    while(numbers < n){
        if(n%numbers == 0){
            count += 1;
            }
        numbers += 1;
    }
    if(count >= 2){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}