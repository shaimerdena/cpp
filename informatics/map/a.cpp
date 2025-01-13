#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_multimap<string, int> s;
    string str;
    while(cin >> str){
        s.insert(make_pair(str, s.count(str)));
        cout << s.count(str)-1 << " ";
    }
    return 0;
}