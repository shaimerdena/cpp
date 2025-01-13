#include <iostream>

using namespace std;

void gcd(int arr[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] % arr[j] == 0 && arr[i] != arr[j] && arr[j] > max){
                max = arr[i];
            }
        }
    }
    cout << max << endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    gcd(arr, n);
}

/*

#include <iostream>
#include <algorithm>
using namespace std;

// Function to find GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the maximum GCD of all pairs in the array
int findMaxGCD(int arr[], int n) {
    int maxGCD = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int currentGCD = gcd(arr[i], arr[j]);
            maxGCD = max(maxGCD, currentGCD);
        }
    }
    return maxGCD;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << findMaxGCD(arr, n) << endl;
    return 0;
}


*/