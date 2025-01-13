#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int k = 0;

long long int power( ){    
    k++;
    return powl(k, k);

}

int main(){
    int n;
    cin >> n;
    
    vector<long long int> v(n);

    generate(v.begin(), v.end(), power);

    cout << 1 << " ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}