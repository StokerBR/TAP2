#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, abertos = 0, fechados = 0, i, j;
  string entrada;

  cin >> n;
  getchar();
  for(i = 0; i < n; i++){
    getline(cin, entrada);

    for(j = 0; j < entrada.length(); j++){
      if(entrada[j] == '<') abertos++;
      if(entrada[j] == '>' && abertos > fechados) fechados++;
    }

    if(abertos <= fechados){
      cout << abertos << '\n';
    }
    else{
      cout << fechados << '\n';
    }

    abertos = 0; fechados = 0;
  }
}
