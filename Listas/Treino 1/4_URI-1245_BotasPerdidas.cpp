#include <iostream>

using namespace std;

struct Botas{
  int numero;
  char pe;
};

int main(){
  int pares, i, j, q = 0;
  while(cin>>pares){
    Botas bota[pares];
    for(i = 0; i < pares; i++){
      cin>>bota[i].numero>>bota[i].pe;
    }
    for(i = 0; i < pares; i++){
      if(bota[i].numero != 0){
        for(j = 0; j < pares; j++){
          if(j != i){
            if(bota[j].numero == bota[i].numero){
              if((bota[i].pe == 'D' && bota[j].pe == 'E') || (bota[i].pe == 'E' && bota[j].pe == 'D')){
                q++;
                bota[i].numero = 0; bota[j].numero = 0;
                break;
              }
            }
          }
        }
      }
    }
    cout<<q<<'\n';
    q = 0;
  }
}
