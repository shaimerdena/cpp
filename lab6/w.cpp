#include <iostream>
#include <>

using namespace std;

void group(int arr[], int n){
    int list[1000] = {0};
    for(int i=0; i<1000; i++){
        list[i] = i+1;
    }
    int count = 0;
    for(int i=0; i<1000; i++){
        for(int j=0; j<arr.size(); j++){
            if(list[i] == arr[j]){
                list[i] = 0;
            }
        }
    }
    for(int i=0; i<1000; i++){
        if(list[i] != 0){
            count += 1;
        }
        if(count == num){
            cout << list[i] << endl;
        }
    }
}

int main(){
    int arr[] = {};
    int n;
    while(cin >> n){
        arr.push_back(n);
    }
    cin >> n;

    group(arr, n);
}

/*
#include <iostream>
#include <cmath>
using namespace std;
int findXthMiss(int a[], int x){
    int i = 1;
    while(x != 0){
        if(a[i++] == 0) x--;
    }
    if(i > 1000)
        return -1;
    return --i;
}
int main(){
    int n, x;
    int a[1001] = {0};
    while(cin.peek() != '\n'){
        cin>>n;
        a[n]++;
    }
    cin>>x;
    cout<<findXthMiss(a, x);
}

*/