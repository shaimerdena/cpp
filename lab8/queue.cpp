#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    
    q.push(1);
    q.push(99);
    q.push(25);
    q.push(10);

    cout << q.back() << endl; //10
    cout << q.front() << endl; //1
    q.pop();
    cout << q.front() << endl; //99

    while(!(q.empty())){
        cout << q.front() << endl; //99, 25, 10
        q.pop();
    }
}