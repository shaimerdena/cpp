#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    int max = v[0];
    for(int i=0; i<v.size(); i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(max == v[i]){
            count += 1;
        }
    }
    cout << count << endl;
}