#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int b[n*m];

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            b[count] = a[i][j];
            count += 1;
        }
    }
    int count2 = 0;
    count = 0;
    sort(b,b+(n*m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((count2)%2==1){
                a[i][j] = b[count];            
                count += 1;
            }
            count2 += 1;
        }
    }
    count = 0;
    count2 = 0;
    reverse(b, b+(n*m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((count2)%2==0){
                a[i][j] = b[count];
                count += 1;
            }
            count2 += 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
