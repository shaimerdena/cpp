#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> s; // Map to store string counts
    string str;

    while (cin >> str) {
        s[str]++; // Increment count for the string
        cout << s[str]-1 << " "; // Print the updated count
    }

    return 0;
}

