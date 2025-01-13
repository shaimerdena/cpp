#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int A = a;

    cout << "The next number for the number "<< a << " is " << ++a << "." << endl;
    cout << "The previous number for the number "<< A << " is " << --A <<"."<< endl;

    return 0;
}