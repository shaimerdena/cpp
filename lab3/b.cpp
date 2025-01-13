#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int b[n];

    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        b[i] = c;
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(b[i]>0){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}