#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> nums;
    int x;  
    while(cin>>x){
        if(!nums.count(x))
            nums.insert(x);
    }
    cout<<nums.size();
}
