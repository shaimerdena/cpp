#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    set<int> st;
    for(int i=0; i<n-1; i++){
        st.insert(v[i] + v[i+1]);
    }
    cout << st.size() << endl;
    return 0;
}