#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    multiset<int> ms;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }
    multiset<int> ::reverse_iterator it;
    int count = 0;
    for(it = ms.rbegin(); it!=ms.rend(); it++){
        cout << *it << " ";
        count += 1;
        if(count == 3){
            break;
        }
    }
    return 0;
}