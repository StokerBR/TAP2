#include <bits/stdc++.h>
using namespace std;

struct Dicionarios{
  string palavra;
  string traducao;
};

int main(){
  int n, pares, traducoes, i, j, k, l;
  bool achou = false;

  cin >> n;
  for(i = 0; i < n; i++){
    cin >> pares >> traducoes;
    getchar();
    Dicionarios dicionario[pares];

    for(j = 0; j < pares; j++){
      getline(cin, dicionario[j].palavra);
      getline(cin, dicionario[j].traducao);
    }

    for(j = 0; j < traducoes; j++){
      string input, token;
      getline(cin, input);
      istringstream ss(input);
      vector<string> frase;
      while(getline(ss, token, ' ')){
        frase.push_back(token);
      }

      for(k = 0; k < frase.size(); k++){
        for(l = 0; l < pares; l++){
          if(frase[k] == dicionario[l].palavra){
            achou = true;
            cout << dicionario[l].traducao;
            if(k == frase.size() - 1){
              cout << '\n';
            }
            else{
              cout << ' ';
            }
          }
        }
        if(!achou){
          cout << frase[k];
          if(k == frase.size() - 1){
            cout << '\n';
          }
          else{
            cout << ' ';
          }
        }
        achou = false;
      }
    }
    cout << '\n';
  }
}
