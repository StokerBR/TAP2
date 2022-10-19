#include <iostream>

using namespace std;

int main(){
  int p, n, c, i, j, q = 0, palitos = 0;
  bool conta = true;
  cin>>p>>n>>c;
  while(p != 0 && n != 0 && c != 0){
    int circuito[n][p];
    for(i = 0; i < n; i++){
      for(j = 0; j < p; j++){
        cin>>circuito[i][j];
      }
    }
    for(j = 0; j < p; j++){
      for(i = 0; i < n; i++){
        if(circuito[i][j] == 1){
          q++;
        }
        else{
          q = 0;
          conta = true;
        }
        if(q == c && conta){
          palitos++;
          conta = false;
        }
      }
      q = 0;
      conta = true;
    }
    cout<<palitos<<'\n';
    palitos = 0;

    cin>>p>>n>>c;
  }
}
