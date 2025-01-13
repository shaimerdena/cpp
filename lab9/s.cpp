#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> s;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }
    vector<int> v(s.begin(), s.end());
    do{
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }cout << endl;
    }while(next_permutation(v.begin(), v.end()));

    return 0;
}