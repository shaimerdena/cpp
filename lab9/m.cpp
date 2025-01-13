#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int length = 0;
    for(int i=1; i<=n; i++){
        length += i;
    }
    vector<int> v(length);
    int count = 0;
    for(int i=0; i<n; i++){
        count += i;
        fill(v.begin()+count, v.end(), i+1);
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}