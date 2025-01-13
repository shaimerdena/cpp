#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector <int> v;
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        v.push_back(n);
    }
    int length = v.size();
    int pairs = ceil(length/2.0);
    for(int i=0; i<pairs; i++){
        for(int j=pairs; j<length; j++){
            if(i + j == length - 1){
                cout << v[i] + v[j] << " ";
            }
        }
    }
    if(int(length/2.0) != (length/2.0)){
        cout << v[pairs - 1] << endl;
    }
    return 0;
}