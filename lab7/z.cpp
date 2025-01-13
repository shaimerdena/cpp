#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
   
    for(int i=0; i<n; i++){
        string name;
        int gpa;
        cin >> name >> gpa;
        if(m.find(name)){
            m[name] += gpa; 
        }
        else{
            m.insert()
        }
    } 
    map<string, int> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        cout << *it << endl;
    }
}