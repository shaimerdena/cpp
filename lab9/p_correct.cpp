#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binary(int &a){
    string str = "";
    int orig = a;
    while(orig > 0){
        str += to_string(orig%2);
        orig/=2;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), binary);
    return 0;
}