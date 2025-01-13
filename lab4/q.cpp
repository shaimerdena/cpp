#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j] < 0){
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}