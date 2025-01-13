int main() {
    int n;
    cin >> n;

    string* a = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i].size() >= 10 && a[i].substr(a[i].length() - 10, 10) == "@gmail.com") {
            cout << a[i].substr(0, a[i].length() - 10) << endl;
        }
    }

    delete[] a; // Free the allocated memory
    return 0;
}