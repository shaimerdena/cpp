#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void isTruth(string sent){
    vector<string> v;
    for(int i=0; i<sent.length(); i++){
        string word = "";
        if(sent[i] == ' '){
            v.push_back(word);
            continue;
        }
        else{
            word.push_back(sent[i]);
        }
        if(i+1 == sent.length()){
            v.push_back(word);
            break;
        }
    }
    for(int i=0; i<v.size(); i++){
        int count = 0;
        for(int j=0; j<v[i].length(); j++){
            if(isdigit(v[i][j])){ 
                count = 1;
                break;
            } 
        }
        if(count == 0){
            cout << v[i] << endl;
        }
    }
}

int main(){
    string sent;
    getline(cin, sent);

    isTruth(sent);
}