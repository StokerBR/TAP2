#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct crianca{
  string nome;
  int numero;
};

int main(){
  int n, num, ind, cont = 1, i, j;

  cin >> n;
  while(n){
    vector<crianca> criancas;
    for(i = 0; i < n; i++){
      criancas.push_back(crianca());
      cin >> criancas[i].nome >> criancas[i].numero;
    }

    num = criancas[0].numero;
    ind = 1;
    if(num%2 == 0) ind = 0;

    while(criancas.size() > 1){
      if(num%2 == 0){
        for(i = ind - 1; cont < num; i--){
          if(i < 0) i = criancas.size() - 1;
          cont++;
        }
      }
      else{
        for(i = ind; cont < num; i++){
          if(i > criancas.size() - 1) i = 0;
          cont++;
        }
      }
      if(i < 0) i = criancas.size() - 1;
      if(i > criancas.size() - 1) i = 0;
      num = criancas[i].numero; ind = i;
      criancas.erase(criancas.begin() + i);
      cont = 1;
    }
    cout << "Vencedor(a): " << criancas[0].nome << '\n';
    cin >> n;
  }
}
