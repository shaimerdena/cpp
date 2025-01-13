#include <iostream>
#include <iomanip>

using namespace std;

double per(double n, double m){
    return (m*100)/n;
}

int main(){
    double n, m;
    cin >> n >> m; 
    cout << setprecision(6) << per(n, m) << endl;
}