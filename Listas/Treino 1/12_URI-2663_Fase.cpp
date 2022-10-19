#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int jogadores, minimo, classificados = 0, i;
  cin >> jogadores >> minimo;
  int pontuacoes[jogadores];
  for(i = 0; i < jogadores; i++){
    cin >> pontuacoes[i];
  }
  sort(pontuacoes, pontuacoes + jogadores, greater<int>());
  for(i = 0; i < jogadores; i++){
    if(classificados >= minimo){
      if(pontuacoes[i] == pontuacoes[i-1]){
        classificados++;
      }
      else break;
    }
    else{
      classificados++;
    }
  }
  cout << classificados << '\n';
}
