#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, string> m;
    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        m.insert(make_pair(s1,s2));
    } 
    string str;
    cin >> str;
    map<string, string> :: iterator it;
    it = m.find(str);
    if(it != it.end()){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}