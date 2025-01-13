#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<char> letters;
    string w;
    cin >> w;
    for(int i=0; i<w.length(); i++){
        letters.insert(w[i]);
    }
    set<string> words;
    for(int i=0; i<n-1; i++){
        string c;
        cin >> c;
        words.insert(c);
    }
    set<char>::iterator i;
    set<string>::iterator j;
    int co = 0;
    for(char letter: letters){
        int count = 0;
        for(string word: words){
            if(word.find(letter) == string::npos){
                break;
            }
            count += 1;
        }
        if(count == words.size()){
            cout << letter << " ";
            co += 1;
        }
    }
    if(co == 0){
        cout << "NO COMMON CHARACTERS" << endl;
    }
}