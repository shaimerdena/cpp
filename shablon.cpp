#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    return 0;
}


    map<pair<string, int>, pair<string, int>> :: iterator i;
    for(i = m.begin(); i! = m.end(); i++){
        map<pair<string, int>, pair<string, int>> :: iterator j;
        for(j = i; j != m.end(); j++){
            if(i->first == j->first && i->second == j->second){
                m.erase(m[j->first]);
            }

        }
    }