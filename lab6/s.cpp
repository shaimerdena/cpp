#include <iostream>
#include <string>

using namespace std;

void calc(string str){

    string nums[] = {"ZER","ONE","TWO","THR","FOU","FIV","SIX","SEV","EIG","NIN"};

    string num1 = "";
    string num2 = "";
    
    char operation;

    int oper_ind;

    for(int i=0; i<str.length();i += 3){
        if(str[i] == '-' || str[i] == '+' || str[i] == '*'){
            operation = str[i];
            oper_ind = i;
            break;
        }
        for(int j=0; j<10; j++){
            if(str.substr(i, 3) == nums[j]){
                num1.push_back(char(j+'0'));
            }
        }
    }
    for(int i=oper_ind+1; i<str.length();i+=3){
        for(int j=0; j<10; j++){
            if(str.substr(i,3) == nums[j]){
                num2.push_back(char(j+'0'));
            }
        }
    }
    int num01 = stoi(num1);
    int num02 = stoi(num2);
    int result;
    if(operation == '+'){
        result = num01 + num02;
    }
    else if(operation == '-'){
        result = num01 - num02;
    }
    else{
        result = num01 * num02;
    }
    string res = to_string(result);

    for(int i=0; i<res.length(); i++){
        for(int j=0; j<10; j++){
            if((res[i]-48) == j){
                cout << nums[j];
            }
        }
    }
}

int main(){
    string str;
    getline(cin, str);

    calc(str);
}