#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int dup;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            dup = a[i];
            if(dup != a[j]){
                
            }
    }
    return 0;
}

/*  "chatgpt code"


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Remove duplicates
    int new_size = 0; // Size of the array without duplicates
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < new_size; j++) {
            if(a[i] == a[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            a[new_size] = a[i]; // Move unique element to the front
            new_size++; // Increase the size of the unique array
        }
    }

    // Output the array with duplicates removed
    for(int i = 0; i < new_size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}



*/