#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i=1; i<=n; i = pow(2, count)){
        cout << pow(2, count) << " " << flush;
        count += 1;
    }
    return 0;
}