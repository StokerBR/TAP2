#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, omitidos = 0, i, j;

  while(cin >> n){
    string telefones[n];

    for(i = 0; i < n; i++){
      cin >> telefones[i];
    }

    sort(telefones, telefones+n);

    for(i = 1; i < n; i++){
      for(j = 0; j < telefones[i].length(); j++){
        if(telefones[i][j] == telefones[i-1][j]){
          omitidos++;
        }
        else{
          break;
        }
      }
    }

    cout << omitidos << '\n';
    omitidos = 0;
  }
}
