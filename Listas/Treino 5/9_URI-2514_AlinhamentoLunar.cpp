#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, l1, l2, l3;

    while(cin >> m) {

        cin >> l1 >> l2 >> l3;

        int lua1 = l1, lua2 = l2, lua3 = l3, anos = 0;

        while(lua3 != lua2 || lua3 != lua1) {

            if (lua1 < lua2) {
                lua1 += l1;
            } else if (lua2 < lua3) {
                lua2 += l2;
            } else {
                lua3 += l3;
            }

        }

        cout << lua3 - m << '\n';

    }

}