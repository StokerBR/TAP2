#include <iostream>

using namespace std;

int main(){
  int altura, comprimento, q = 0, i, b1, b2;

  cin >> altura >> comprimento;
  while(altura != 0 && comprimento != 0){
    for(i = 0; i < comprimento; i++){
      if(i == 0){
        cin >> b1;
        q += altura - b1;
      }
      else{
        cin >> b2;
        if(b2 < b1){
          q += b1 - b2;
        }
        b1 = b2;
      }
    }
    cout << q << '\n';
    q = 0;
    cin >> altura >> comprimento;
  }
}
