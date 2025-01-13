#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int count1 = 0;
    for(int i=n; i<=m; i++){
        int count = 0;
        for(int j=2; j<i; j++){
            if(i % j == 0){
                count += 1;
            }
        }
        if(count == 0 && i!=1){
            cout << i << endl;
            count1 += 1;
        }
    }
    if(count1 == 0){
        cout << "Absent" << endl;
    }
    return 0;
}