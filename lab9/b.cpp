#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool sorting(int a, int b){
    return a<b;
}

int main(){
    int n;
    cin >> n;

    vector<string> v1;
    vector<int> v2;
    for(int i=0; i<n; i++){
        string name;
        int point;
        cin >> name >> point;
        v1.push_back(name);
        v2.push_back(point);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), sorting);

    for(int i=0; i<n; i++){
        cout << v1[i] << " " << v2[i] << endl;
    }
    return 0;
}