#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        int nums = 0;
        for(int j=1; j<abs(num); j++){
            if(abs(num)%j == 0){
                nums+= 1;
            }
        }
        if(nums == 1){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}