#include <iostream>
#include <map>

using namespace std;

int main(){
    string str;
    map<string, int> m;
    while(cin >> str){
        m[str] += 1;
    }
    int count = 0;
    map<string, int> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        if(count < it->second){
            count = it->second;
        }
    }
    map<string, int> :: iterator k;
    for(k = m.begin(); k!=m.end(); k++){
        if(count == k->second){
            cout << k->first << endl;
            break;
        }
    }
    return 0;
}