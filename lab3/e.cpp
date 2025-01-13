#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int n1 = n;
    n1 += 64;
    int n2 = n;
    n2 += 96;

    if(n>26 || n<1){
        cout << "No such letter!" << endl;
    }
    else{
        cout << char(n1) << " " << char(n2) << endl;
    }
    return 0;
}