#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    int x;
    while(cin >> x){
        set<int> ::iterator it;
        it = s.find(x);
        if(it != s.end()){
            cout << "YES" << endl;
        }
        else{
            s.insert(x);
            cout << "NO" << endl;
        }
    }
    
    return 0;
}