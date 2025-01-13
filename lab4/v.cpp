#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    for(int i=2; i<n; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                count += 1;
            }
        }
        if(count == 0){
            cout << i << " is prime" << endl;
        }
        count = 0;
    }
    return 0;
}