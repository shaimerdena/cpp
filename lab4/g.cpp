#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    char a[8][8];

    if(x >= 0 && x < 9 && y >= 0 && y < 9){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                a[i][j] = '*';
                if(i == x || j==y || (i + j == x + y) || (x-i == y-j)){
                    a[i][j] = 50;
                }
                a[x][y] = 49;
                cout << a[i][j] << " ";
            }
        cout << endl;
        }  
    }
    else{
        cout << "Impossible" << endl;
    }
    return 0;
}
