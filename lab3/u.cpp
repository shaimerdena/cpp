#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    reverse(a, a+n);
    int count_list[n];
    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[i] == a[j]){
                count += 1;
            }
        }
        count_list[i] = count;
        count = 0;
    }

    int max = count_list[0];

    for(int i=0; i<n; i++){
        if(max < count_list[i]){
            max = count_list[i];
        }
    }

    for(int i=0; i<n; i++){
        if(max == count_list[i]){
            cout << a[i] << " " << flush ;
        }
    }
    return 0;
}