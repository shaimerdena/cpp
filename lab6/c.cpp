#include <iostream>

using namespace std;

void same(int a[],int b[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] == b[j]){
                count += 1;
                b[j] = 0;
                break;
            }
        }
    }
    cout << count << endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    same(a, b, n);
}

/*

//optimized 

#include <iostream>
#include <algorithm>

using namespace std;

void same(int a[], int b[], int n) {
    sort(a, a + n); // Sort array a
    sort(b, b + n); // Sort array b
    
    int count = 0;
    int i = 0, j = 0;
    
    // Use two-pointer technique to find common elements
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            count++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    same(a, b, n);
}

*/