#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q, i, j, k, l, indice;
  bool achou = false;
  string entrada, subsequencia;

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> entrada;

    cin >> q;

    for(j = 0; j < q; j++){
      cin >> subsequencia;

      indice = 0;
      for(k = 0; k < subsequencia.length(); k++){
        achou = false;
        for(l = indice; l < entrada.length(); l++){
          if(subsequencia[k] == entrada[l]){
            achou = true;
            indice = l + 1;
            break;
          }
        }
        if(!achou){
          cout << "No\n";
          break;
        }
      }
      if(achou) cout << "Yes\n";
    }
  }
}
