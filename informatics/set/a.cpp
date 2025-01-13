#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x;
    vector<int> v;
    while(cin >> x){
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        bool flag = false;
        for(int j=0; j<i; j++){
            if(v[i] == v[j]){
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
        }

    }
    return 0;
}