#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a, d, i;
  bool impedido = false;
  cin>>a>>d;
  while(a != 0 && d != 0){
    int atacantes[a], defensores[d];
    for(i = 0; i < a; i++){
      cin>>atacantes[i];
    }
    for(i = 0; i < d; i++){
      cin>>defensores[i];
    }
    sort(defensores, defensores + d, greater<int>());

    for(i = 0; i < a; i++){
      if(atacantes[i] < defensores[d-2]){
        impedido = true;
        break;
      }
    }

    if(impedido){
      cout<<"Y\n";
    }
    else{
      cout<<"N\n";
    }

    impedido = false;
    cin>>a>>d;
  }
}
