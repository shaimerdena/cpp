#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int sec;
    cin >> sec;

    double min = (sec/60)%60;
    int hour = (sec/3600)%24;
    cout << hour << ":"
    << setfill('0') << setw(2) << min << ":"
    << setfill('0') << setw(2) << sec%60 << endl;

    return 0;
}