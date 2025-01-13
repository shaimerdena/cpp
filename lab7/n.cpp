#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> st;
    int count = 0;
    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        count++;
        st.insert(c);
    } 
    if(count == st.size()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}