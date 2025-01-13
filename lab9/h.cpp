#include <iostream>
#include <utility>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<pair<string, int>, pair<string, int>> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            string str1, str2;
            int num1, num2;
            cin >> str1 >> num1 >> str2 >> num2;
            m.insert({{str1, num1}, {str2, num2}});
        }
    }

    map<pair<string, int>, pair<string, int>> :: iterator i;
    for(i = m.begin(); i!= m.end(); i++){
        cout << i->first.first << " and " << i->second.first << " " << i->first.second + i->second.second << endl;
    }
    return 0;
}