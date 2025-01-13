#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse(int a, int b){
    return sqrt(pow(a,2) + pow(b,2));
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << setprecision(4) << hypotenuse(a,b) << endl;
    return 0;
} 