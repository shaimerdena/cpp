#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    int count1 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            count1 += 1;
        }
    }
    int count2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == a[j][i] || i==j){
                count2 += 1;
            }
        }
    }
    if(count1 == count2){
        cout << "Perfect." << endl;
    }
    else{
        cout << "Not perfect." << endl;
    }
    return 0;
}