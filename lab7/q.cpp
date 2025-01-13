#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sum = 0;
    map<string, double, greater<string>> m;
    map<string, double>::iterator it;
    for(int i=0; i<n; i++){
        string c;
        double num;
        cin >> c >> num;
        if(m.find(c) != m.end()){
            m[c] += num;
        }
        else{
            m[c] = num;
        }
        sum += num;
    }
    multimap<double, string, greater<double>> multi;

    for(it = m.begin(); it!= m.end(); it++){
        double perc = (it->second/sum)*100;
        multi.emplace(perc, it->first);
    }
    multimap<double, string>::iterator i;
    for(i = multi.begin(); i!=multi.end(); i++){
        cout << i->second << " " << i->first << "%" << endl;
    }
    return 0;
}