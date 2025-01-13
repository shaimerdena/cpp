#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    a -= (a%2 * 1);

    cout << a + 2 << endl;
    return 0;
}