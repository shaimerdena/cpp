#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int** a = new int*[n+2];
    for(int i = 0; i < n+2; i++){
        a[i] = new int[m+2];
    }


    for(int i = 0; i < n+2; i++){
        for(int j = 0; j < m+2; j++){
            a[i][j] = 0;
        }
    }

    int num_mine;
    cin >> num_mine;

    int** coor = new int*[num_mine];
    for(int i = 0; i < num_mine; i++){
        coor[i] = new int[2];
    }

    int x, y;

    for(int i = 0; i < num_mine; i++){
        for(int j = 0; j < 2; j++){
            cin >> coor[i][j];
            if(j == 0){
                x = coor[i][j];
                x += 1;
            } else {
                y = coor[i][j];
                y += 1;
            }
        }
        a[x][y] = 100; 

    for(int i = 0; i < n+2; i++){
        for(int j = 0; j < m+2; j++){
            if(a[i][j] == 100){
                if(a[i][j-1] != 100) a[i][j-1] += 1;
                if(a[i][j+1] != 100) a[i][j+1] += 1;
                if(a[i-1][j] != 100) a[i-1][j] += 1;
                if(a[i+1][j] != 100) a[i+1][j] += 1;
                if(a[i-1][j-1] != 100) a[i-1][j-1] += 1;
                if(a[i+1][j+1] != 100) a[i+1][j+1] += 1;
                if(a[i+1][j-1] != 100) a[i+1][j-1] += 1;
                if(a[i-1][j+1] != 100) a[i-1][j+1] += 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 0){
                cout << '.' << " ";
            } else if(a[i][j] == 100){
                cout << '*' << " ";
            } else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    for(int i = 0; i < n+2; i++){
        delete[] a[i];
    }
    delete[] a;

    for(int i = 0; i < num_mine; i++){
        delete[] coor[i];
    }
    delete[] coor;

    return 0;
}