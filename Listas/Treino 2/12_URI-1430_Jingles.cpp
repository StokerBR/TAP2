#include <bits/stdc++.h>
using namespace std;

int main(){
  int q = 0, i;
  double compasso = 0;
  string entrada;

  cin >> entrada;
  while(entrada[0] != '*'){
    for(i = 1; i < entrada.length(); i++){
      if(entrada[i] == '/'){
        if(compasso == 1) q++;
        compasso = 0;
        continue;
      }
      switch(entrada[i]){
        case 'W':
          compasso += 1;
          break;

        case 'H':
          compasso += 0.5;
          break;

        case 'Q':
          compasso += 0.25;
          break;

        case 'E':
          compasso += 0.125;
          break;

        case 'S':
          compasso += 0.0625;
          break;

        case 'T':
          compasso += 0.03125;
          break;

        case 'X':
          compasso += 0.015625;
          break;
      }
    }
    cout << q << '\n';
    q = 0; compasso = 0;

    cin >> entrada;
  }
}
