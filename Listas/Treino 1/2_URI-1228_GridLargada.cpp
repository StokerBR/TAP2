#include <iostream>

using namespace std;

int main(){
  int competidores, i, j, k, l, ind, ultrapassagens = 0;
  bool estaNaDireita;
  while(cin>>competidores){
    int largada[competidores], chegada[competidores];

    //largada
    for(i = 0; i < competidores; i++){
      cin>>largada[i];
    }
    //chegada
    for(i = 0; i < competidores; i++){
      cin>>chegada[i];
    }

    //ultrapassagens
    for(i = 0; i < competidores; i++){
      for(j = 0; j < competidores; j++){
        if(chegada[j] == largada[i]){
          for(k = j+1; k < competidores; k++){
            estaNaDireita = false;
              for(l = i+1; l < competidores; l++){
                if(chegada[k] == largada[l]){
                  estaNaDireita = true;
                }
              }
            if(!estaNaDireita) ultrapassagens++;
          }
        }
      }
    }

    cout<<ultrapassagens<<'\n';
    ultrapassagens = 0;
  }
}
