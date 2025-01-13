#include <iostream>

using namespace std;

/*
#include <iostream>
#include <string>
using namespace std;

// Function to transform a word based on the given rules
string transformWord(const string &word) {
    string transformed = "";
    for (char c : word) {
        if (c == 'b' || c == 'p' || c == 'B' || c == 'P') {
            transformed += 'b';
        } else if (c == 'i' || c == 'e' || c == 'I' || c == 'E') {
            transformed += 'i';
        } else {
            transformed += tolower(c); // Convert other letters to lowercase
        }
    }
    return transformed;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string word1, word2;
        cin >> word1 >> word2;

        // Transform both words according to the rules
        string transformed1 = transformWord(word1);
        string transformed2 = transformWord(word2);

        // Compare the transformed words
        if (transformed1 == transformed2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        sin >> arr[i];
    }

}