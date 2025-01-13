#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double total_gpa = 0;
    double total_cre = 0;
    double gpa = 1.0;
    
    for(int i=0; i<n; i++){
        gpa = 1.0;

        int at1, at2, fin, cre;
        cin >> at1 >> at2 >> fin >> cre;

        if((at1 + at2) >= 30 && fin>=20){
            double gp = 0;
            gp = at1 + at2 + fin;

            for(int i=50; i<=100; i+=5){
                if(gp>=i && gp<=(i+4)){
                    total_gpa += gpa*cre;
                    break;
                }
                gpa += (1.0/3.0);
            }
        }
        total_cre += cre;
    }
    cout << total_gpa/total_cre << endl;
    return 0;
}