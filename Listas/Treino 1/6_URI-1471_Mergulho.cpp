#include <iostream>

using namespace std;

int main(){
  int n, r, i, j, achados = 0;
  bool achou = false;
  while(cin>>n>>r){
    if(n == r){
      int temp;
      for(i = 0; i < r; i++){
        cin>>temp;
      }
      cout<<"*\n";
    }
    else{
      int mergulhadores[n], retornaram[r];
      for(i = 0; i < n; i++){
        mergulhadores[i] = i + 1;
      }
      for(i = 0; i < r; i++){
        cin>>retornaram[i];
      }
      for(i = 0; i < n; i++){
        for(j = 0; j < r; j++){
          if(retornaram[j] == mergulhadores[i]){
            achou = true;
            break;
          }
        }
        if(!achou){
          cout<<mergulhadores[i]<<' ';
          achados++;
          if(achados == n - r){
            cout<<'\n';
            achados = 0;
            break;
          }
        }
        achou = false;
      }
    }
  }
}
