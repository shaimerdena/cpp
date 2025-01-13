    while (cin >> str) {
        if (m.find(str) != m.end()) {
            m[str] += 1;
        } else {
            m.insert(make_pair(str, 1));
        }
    }

    while (cin >> str) {
        m[str] += 1;
    }

    //both of them work in the same way