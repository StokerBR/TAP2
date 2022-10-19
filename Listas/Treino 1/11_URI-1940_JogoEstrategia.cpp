#include <iostream>

using namespace std;

int main(){
  int j, r, i, k, soma = 0, maiorSoma = 0, indMaiorSoma;
  cin >> j >> r;
  int jogos[r][j];
  for(i = 0; i < r; i++){
    for(k = 0; k < j; k++){
      cin >> jogos[i][k];
    }
  }
  for(k = 0; k < j; k++){
    for(i = 0; i < r; i++){
      soma += jogos[i][k];
    }
    if(soma >= maiorSoma){
      maiorSoma = soma;
      indMaiorSoma = k;
    }
    soma = 0;
  }
  cout << indMaiorSoma + 1 << '\n';
}
