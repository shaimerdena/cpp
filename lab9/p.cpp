#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void binary(int &a){
    string str = "";
    while(a > 0){
        str += to_string(a%2);
        a/=2;
    }
    reverse(str.begin(), str.end());
    int num = stoi(str);
    a = num;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), binary);

    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }
    return 0;
}