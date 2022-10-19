#include <bits/stdc++.h>
using namespace std;

int main() {

    int combustivel, n, i, count = 0, velocidade = 0, horas;

    cin >> combustivel;
    n = combustivel;

    while (count < 10) {

        bool primo = true;

        for (i = 2; (i*i) <= n; i++) {

            if (n % i == 0) {

                primo = false;
                break;

            }

        }

        if (primo) {

            velocidade += n;
            count++;

        }

        n++;

    }

    cout << velocidade << " km/h\n";
    horas = truncf( (float)60000000/(float)velocidade );
    cout << horas << " h / " << horas/24 << " d\n";

}