#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_prime(int a){
    int count = 0;
    for(int i=1; i<abs(a); i++){
        if(abs(a)%i == 0){
            count += 1;
        }
    }
    return count==1;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    cout << count_if(v.begin(), v.end(), is_prime) << endl;
    return 0;
}