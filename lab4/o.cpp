#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    cout << "coordinates of min elements:" << endl;

    int min;
    int sum = 0;
    int x,y;
    for(int i=0; i<m; i++){
        min = a[0][i];
        x=0;
        y=i;
        for(int j=0; j<n; j++){
            if(a[j][i] < min){
                x = j;
                y = i;
                min = a[j][i];
            }
        }
        cout << x+1 << ";" << y+1 << endl;
        sum += min;
        
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum << endl;
    return 0;
}