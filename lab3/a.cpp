#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n]; 


    for(int i=0; i<n; i++){
        int b;
        cin >> b;
        a[i] = b;
    }
    for(int i=0; i<n; i++){  
        if(a[i]%2==1){
            cout << a[i] << endl;
        } 
    }
    return 0;
}