#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m1;
    string str;
    while(cin >> str){
        m1[str] += 1;
    }
    multimap<int, string> m2;
    
    map<string, int> :: iterator it;
    for(it = m1.begin(); it!=m1.end(); it++){
        m2.insert(make_pair(it->second, it->first));
    }
    map<int, string> :: reverse_iterator k;
    for(k = m2.rbegin(); k!=m2.rend(); k++){
        cout << k->second << endl;
    }
    return 0;
}