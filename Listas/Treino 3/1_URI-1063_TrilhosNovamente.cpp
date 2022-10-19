#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i, j;

  while(cin >> n && n != 0){
    char resultado[n], aux;
    int remocoes = 0, qRemocoes = 0, inseridos = 0, saidaInseridos = 0;;
    vector<char> trilhosA, trilhosB, estacao, saida;

    for(i = 0; i < n; i++){
      cin >> aux;
      trilhosA.push_back(aux);
    }

    for(i = 0; i < n; i++){
      cin >> resultado[i];
    }

    for(i = 0; i < n; i++){
      vector<char>::iterator it;
      it = find(trilhosA.begin(), trilhosA.end(), resultado[i]);
      if(it != trilhosA.end()){
        while(true){
          estacao.push_back(trilhosA[0]);
          saida.push_back('I');
          inseridos++;

          if(trilhosA[0] == resultado[i]){
            trilhosA.erase(trilhosA.begin());
            break;
          }
          trilhosA.erase(trilhosA.begin());
        }
      }

      if(estacao.size() > 0){
        while(estacao.size() > 0){
          trilhosB.push_back(estacao[estacao.size()-1]);
          saida.push_back('R');

          if(estacao[estacao.size()-1] == resultado[i]){
            estacao.pop_back();
            break;
          }
          estacao.pop_back();
        }
      }
    }

    for(i = 0; i < n; i++){
      if(resultado[i] != trilhosB[i]){
        remocoes = i;
        break;
      }
    }

    if(remocoes == 0){
      for(i = 0; i < saida.size(); i++){
        cout << saida[i];
      }
      cout << '\n';
    }
    else{
      for(i = 0; i < saida.size(); i++){
        cout << saida[i];
        if(saida[i] == 'R') qRemocoes++;
        if(qRemocoes == remocoes) break;
        if(saida[i] == 'I') saidaInseridos++;
      }

      if(saidaInseridos < inseridos){
        for(i = 0; i < (inseridos - saidaInseridos); i++){
          cout << 'I';
        }
      }
      cout << " Impossible\n";
    }

  }
}
