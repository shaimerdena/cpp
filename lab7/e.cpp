#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find(int n, const vector<int>& v){
    for(int i=0; i<n; i++){
        if(i != v[i]){
            cout << i << endl;
            break;
        }
        else if(i == v[n-1]){
            cout << v[n-1] + 1 << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }   
    sort(v.begin(), v.end());
    find(n, v);
    return 0;
}