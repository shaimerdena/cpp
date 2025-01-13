#include <iostream>
#include <vector>

using namespace std;

int minn(int a, int b, int c, int d){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    int min = a;
    for(int i=0; i<4; i++){
        if(min > v[i]){
            min = v[i];
        }
    }
    return min;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << minn(a,b,c,d) << endl;
}