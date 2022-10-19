#include <bits/stdc++.h>
using namespace std;

int main(){
  int abertos = 0, fechados = 0, i;
  bool correto = true;
  string entrada;

  while(getline(cin, entrada)){
    for(i = 0; i < entrada.length(); i++){
      if(entrada[i] == '('){
        abertos++;
      }
      else if(entrada[i] == ')'){
        fechados++;
        if(abertos < fechados){
          correto = false;
          break;
        }
      }
    }
    if(abertos != fechados) correto = false;

    if(correto){
      cout << "correct\n";
    }
    else{
      cout << "incorrect\n";
    }
    correto = true; abertos = 0; fechados = 0;
  }
}
