#include <bits/stdc++.h>
using namespace std;

int main(){
  int i;
  bool antes = false;
  string entrada, aux, saida;

  while(cin >> entrada){
    for(i = 0; i < entrada.length(); i++){
      if(entrada[i] != '[' && entrada[i] != ']'){
        if(antes){
          aux += entrada[i];
        }
        else{
          saida += entrada[i];
        }
      }

      if(entrada[i] == ']' || i == entrada.length()-1){
        if(antes){
          saida.insert(0, aux);
          aux.clear();
        }
        antes = false;
      }

      if(entrada[i] == '[' || i == entrada.length()-1){
        if(antes){
          saida.insert(0, aux);
          aux.clear();
        }
        antes = true;
      }
    }
    if(saida.length() > 0){
      cout << saida << '\n';
    }
    entrada.clear(); aux.clear(); saida.clear();
  }
}
