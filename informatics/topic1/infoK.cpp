#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int min;
    cin >> min;

    double time = min/60;
    int hour = int(time) % 24;

    cout << hour << endl;
    cout << min%60 << endl;
    return 0;
}