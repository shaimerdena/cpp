#include <iostream>
#include <vector>

using namespace std;

void noc(int n, int k, int sum){
    int avg = int(sum / n);
    cout << abs(k - avg) << endl;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> v(n);    
    int sum = 0;
    for(int i=0; i<n; i++){
        int noc;
        cin >> noc;
        v.push_back(noc);
        sum += noc;
    }
    noc(n, k, sum);
}