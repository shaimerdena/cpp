#include <iostream>
#include <map>

using namespace std;


int main(){
    int n;
    cin >> n;
    map<string, double> doc;
    int summa = 0;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        for(int j=0; j<m; j++){
            string str;
            int num;
            cin >> str >> num;
            doc[str] += num;
            summa += num;
        }
    }
    map<string, double> :: iterator it;
    for(it = doc.begin(); it != doc.end(); it++){
        doc[it->first] = ((it->second)*100.0)/summa;
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}