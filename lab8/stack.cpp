#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(27);
    s.push(3);

    s.emplace(45); //works faster than the push

    while(!(s.empty())){
        cout << s.top() << endl;
        s.pop();
    }
}