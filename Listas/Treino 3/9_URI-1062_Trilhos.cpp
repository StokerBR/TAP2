#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, inicial, i, j;

  while(cin >> n && n != 0){
    while(cin >> inicial && inicial != 0){
      int resultado[n];
      resultado[0] = inicial;
      bool igual = true;
      vector<int> trilhosA, trilhosB, estacao;

      for(i = 1; i <= n; i++){
        trilhosA.push_back(i);
      }

      for(i = 1; i < n; i++){
        cin >> resultado[i];
      }

      for(i = 0; i < n; i++){
        if(binary_search(trilhosA.begin(), trilhosA.end(), resultado[i])){
          while(true){
            estacao.push_back(trilhosA[0]);

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
          igual = false;
          break;
        }
      }

      if(igual){
        cout << "Yes\n";
      }
      else{
        cout << "No\n";
      }
    }
    cout << '\n';
  }
}
