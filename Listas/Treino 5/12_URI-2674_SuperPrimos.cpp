#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, i, j;

    while (cin >> n) {

        bool primo = true;

        if (n <= 1) primo = false;

        for (i = 2; (i*i) <= n; i++) {

            if (n % i == 0) {

                primo = false;
                break;

            }

        }

        if (primo) {

            bool superprimo = true;
            
            int t = to_string(n).length();
            int num[t];

            for(int i = t-1; i >= 0; i--) {

                num[i] = n % 10;
                n /= 10;

            }

            for (i = 0; i < t; i++) {

                if (num[i] <= 1) superprimo = false;

                for (j = 2; (j*j) <= num[i]; j++) {

                    if (num[i] % j == 0) {

                        superprimo = false;
                        break;

                    }

                }

                if (!superprimo) break;

            }

            if (superprimo) {

                cout << "Super\n";

            } else {

                cout << "Primo\n";

            }

        } else {

            cout << "Nada\n";

        }

    }

}