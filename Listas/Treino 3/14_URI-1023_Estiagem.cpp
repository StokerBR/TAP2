#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i, cidade = 1;

  while(cin >> n && n != 0){
    int pessoas, consumo, totalPessoas = 0, totalCosumo = 0;
    map<int, int> consumoPessoa;

    for(i = 0; i < n; i++){
      int media;

      cin >> pessoas >> consumo;
      totalPessoas += pessoas; totalCosumo += consumo;

      media = consumo/pessoas;
      if(consumoPessoa.find(media) == consumoPessoa.end()){
        consumoPessoa[media] = pessoas;
      }
      else{
        consumoPessoa[media] += pessoas;
      }
    }

    if(cidade > 1) cout << '\n';
    cout << "Cidade# " << cidade << ":\n";
    for(auto it = consumoPessoa.begin(); it != consumoPessoa.end(); it++){
      cout << it->second << '-' << it->first;
      if(distance(it, consumoPessoa.end()) == 1){
        cout << '\n';
      }
      else{
        cout << ' ';
      }
    }

    double mediaConsumo = (double)totalCosumo / (double)totalPessoas;
    mediaConsumo = floor(100 * mediaConsumo) / 100;
    cout << "Consumo medio: " << fixed << setprecision(2) << mediaConsumo << " m3.\n";

    cidade++;
  }
}
