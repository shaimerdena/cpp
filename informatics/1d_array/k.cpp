#include <iostream>
#include <array>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum = 0;
    int cnt[] = {};
    for(int i=0; i<10; i++){
        for(int j=0; j<n;j++){
            if(i == a[j]){
                cnt[i] += 1;
            }
        }
        if(cnt[i] > 0){
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}