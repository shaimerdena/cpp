#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v, t;
    cin >> v >> t;

    cout << ((v*t)%109 + 109)%109 << endl;
    return 0;
}