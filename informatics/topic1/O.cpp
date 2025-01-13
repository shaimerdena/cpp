#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    int c = a*n + (b*n)/100;
    int d = (b*n)%100;

    cout << c << " " << d << endl;
    return 0;
}