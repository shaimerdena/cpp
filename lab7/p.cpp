#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> matrix[i][0] >> matrix[i][1];
    }
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i] = matrix[i][0] + matrix[i][1];
    }
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<i; j++){
            if(v[i] == v[j]){
                count++;
            }
        }
        if(count == 0){
            cout << 0 << endl; 
        }
        else{
            cout << count << endl;
        }
    }
    return 0;
}