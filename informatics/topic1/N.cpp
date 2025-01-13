#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    int time = 540;
    while(count != n){
        time+=45;
        count+=1;
        if(count==n){
            continue;
        }
        else if(count%2==0){
            time+=15;
        }
        else{
            time+=5;
        }
    }
    cout << (time/60)%24 << " " << time%60 << endl;
    return 0;
}