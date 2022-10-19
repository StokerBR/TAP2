#include <iostream>
#include <vector>

using namespace std;

int main(){
  int q, e, i, j, tmp;
  bool jaEsteve = false;
  cin >> q >> e;
  vector<int> ultimosDias;
  for(i = 0; i < e; i++){
    cin >> tmp;
    ultimosDias.push_back(tmp);
  }
  for(i = 0; i < q; i++){
    cin >> tmp;
    for(j = 0; j < e; j++){
      if(ultimosDias[j] == tmp){
        cout << "0\n";
        jaEsteve = true;
        break;
      }
    }
    if(!jaEsteve){
      cout << "1\n";
      ultimosDias.push_back(tmp);
      e++;
    }
    jaEsteve = false;
  }
}
