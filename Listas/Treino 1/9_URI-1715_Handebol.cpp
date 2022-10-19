#include <iostream>

using namespace std;

int main(){
  int n, m, i, j, tmp, jogosComGol = 0, q = 0;
  cin>>n>>m;
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cin>>tmp;
      if(tmp != 0) jogosComGol++;
    }
    if(jogosComGol == m) q++;
    jogosComGol = 0;
  }

  cout<<q<<'\n';
}
