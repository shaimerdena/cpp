#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sorting(const vector<int> &a, const vector<int> &b){
    int sum1, sum2;
    sum1 = sum2 = 0;
    for(int i=0; i<a.size(); i++){
        sum1 += a[i];
    }
    for(int i=0; i<b.size(); i++){
        sum2 += b[i];
    }
    if(sum1 != sum2){
        return sum1 < sum2;
    }
    else if(a.size() != b.size()){
        return a.size() < b.size();
    }
}   

int main(){
    int n;
    cin >> n;

    int m;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        cin >> m;
        vector<int> row(m);
        for(int j=0; j<m; j++){
            cin >> row[j];
        }
        v.push_back(row);
    }
    sort(v.begin(), v.end(), sorting);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}