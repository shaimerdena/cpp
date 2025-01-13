#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<string> st;
    for(int i=0; i<n; i++){
        string c;
        cin >> c;
        st.insert(c);
    }
    cout << st.size() << endl;
    return 0;
}