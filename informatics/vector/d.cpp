#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x;
    vector<int> v;
    while(cin >> x && x!=0){
        v.push_back(x);
    }
    int max  = v[0];
    for(int i=0; i<v.size(); i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    vector<int> length;
    int count = 0;
    for(int i=0; i<v.size()-1; i++){
        if(v[i] == max){
            length.push_back(count);
            count = 0;
        }
        if(v[i] == v[i+1] && v[i] == max){
            count = 0;
        }
        else{
            count += 1;
        }
    }    
    length.erase(length.begin());
    if(length.empty()){
        cout << 0 << endl;
    }
    else{
        int min = length[0];
        for(int i=0; i<length.size(); i++){
            if(min > length[i]){
                min = length[i];
                }
            }
        cout << min << endl;
    }
    return 0;
}