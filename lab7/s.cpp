#include <iostream>
#include <map>

using namespace std;

int main(){
    multimap<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int day;
        cin >> name >> day;
        
        bool flag = true;
        multimap<string, int>::iterator it;
        for(it = m.begin(); it!=m.end(); it++){
            if(it->second == day && it->first == name){
                flag = false;
                break;
            }
        }
        if(flag == false){
            continue;
        }
        else{
            m.insert(make_pair(name, day));
        }
    }
    multimap<string, int> :: iterator i;
    map<string, int> res;
    for(i = m.begin(); i!=m.end(); i++){
        res.insert(make_pair(i->first, m.count(i->first)));
    }
    map<string, int> :: iterator it;
    for(it = res.begin(); it!=res.end(); it++){
        cout << it->first << " ";
        if((it->second) >= 3){
            cout << "+1" << endl;;
        }
        else{
            cout << "NO BONUS" << endl;;
        }
    }
    return 0;
}