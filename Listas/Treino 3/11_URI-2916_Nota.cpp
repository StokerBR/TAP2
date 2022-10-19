#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, i;

  while(cin >> n >> k && n != 0 && k != 0){
    unsigned long long int soma = 0;
    int notas[n];

    for(i = 0; i < n; i++){
      cin >> notas[i];
    }

    sort(notas, notas+n, greater<int>());

    for(i = 0; i < k; i++){
      soma += notas[i];
    }

    cout << soma%1000000007 << '\n';
  }
}
