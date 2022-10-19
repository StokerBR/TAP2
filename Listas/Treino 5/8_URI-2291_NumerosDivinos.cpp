#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, i;

    while (cin >> n && n != 0) {

        int divino = 0;

        for (i = 1; i <= n; i++) {

            divino += (n/i) * i;

        }

        cout << divino << '\n';

    }

}