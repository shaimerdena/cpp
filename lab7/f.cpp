#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int num;
    cin >> num;
    vector<vector<int>> l(num, vector<int>(2));
    
    for (int i = 0; i < num; i++) {
        cin >> l[i][0] >> l[i][1];
        }

    for(int i=0; i < num; i++){
        int count = 0;
        int max = 0;
        for(int j = l[i][0]; j<=l[i][1]; j++){
            if(v[j] > max){
                count++;
                max = v[j];
            }
        }
        cout << count << endl;
    }
    return 0;
}