#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n+2][m+2];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            a[i][j] = 0;
        }
    }   

    int num_mine;
    cin >> num_mine;

    int coor[num_mine][2];

    int x, y;

    for(int i=0; i<num_mine; i++){
        for(int j=0; j<2; j++){
            cin >> coor[i][j];
            if(j == 0){
                x = coor[i][j];
                x += 1;
            }
            else{
                y = coor[i][j];
                y += 1;
            }
        }
        a[x][y] = 100;
    } 

    for(int i=0; i<n+2; i++){
        for(int j=0; j<m+2; j++){
            if(a[i][j] == 100){
                if(a[i][j-1] != 100)a[i][j-1] += 1;
                if(a[i][j+1] != 100)a[i][j+1] += 1;
                if(a[i-1][j] != 100)a[i-1][j] += 1;
                if(a[i+1][j] != 100)a[i+1][j] += 1;
                if(a[i-1][j-1] != 100)a[i-1][j-1] += 1;
                if(a[i+1][j+1] != 100)a[i+1][j+1] += 1;
                if(a[i+1][j-1] != 100)a[i+1][j-1] += 1;
                if(a[i-1][j+1] != 100)a[i-1][j+1] += 1;
            }
        }
    }   

    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(a[i][j] == 0){
                cout << '.' << " ";
            }
            else if(a[i][j] == 100){
                cout << '*' << " ";
            }
            else{
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    } 
    return 0;
}