#include <bits/stdc++.h>
using namespace std;

int mdc(int x, int y, int z) {

    int resto = 1;

    while (resto) {

        resto = x % y;

        x = y;
        y = resto;

    }

    resto = 1;

    while (resto) {

        resto = x % z;

        x = z;
        z = resto;

    }

    return x;

}

int main() {

    int a, b, c;

    while (cin >> a >> b >> c) {

        int h, c1, c2;

        //saber qual é a hipotenusa
        if (a > b && a > c) {

            h = a; 
            c1 = b;
            c2 = c;

        } else if (b > a && b > c) {

            h = b; 
            c1 = a;
            c2 = c;

        } else if (c > a && c > b) {

            h = c; 
            c1 = a;
            c2 = b;

        }
    
        if ((h*h) == (c1*c1 + c2*c2)) {

            if (mdc(a, b, c) == 1) {

                cout << "tripla pitagorica primitiva\n";

            } else {

                cout << "tripla pitagorica\n";

            }

        } else {

            cout << "tripla\n";

        }

    }
    

}