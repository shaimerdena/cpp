#include <iostream>
#include <vector>

using namespace std;

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
    int avg = int(sum/n);
    cout << abs(avg-k) << endl;
}