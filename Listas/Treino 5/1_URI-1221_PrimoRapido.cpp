#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, num, i, j;
    bool primo = true;

    cin >> n;

    for (i = 0; i < n; i++) {

        cin >> num;

        for (j = 2; (j*j) <= num; j++) {

            if (num % j == 0) {

                primo = false;
                break;

            }

        }

        if (primo) {

            cout << "Prime\n";

        } else {

            cout << "Not Prime\n";

        }

        primo = true;

    }

}