#include <iostream>

using namespace std;

void maxnum(int a[]){
    int max = a[0];
    for(int i=0; i<4; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << max << endl;
}

int main(){
    int a[4];

    for(int i=0; i<4; i++){
        cin >> a[i];
    }
    maxnum(a);
    return 0;
}