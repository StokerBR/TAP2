#include <bits/stdc++.h>
using namespace std;

int main(){
  int i, j;
  bool achou = false;
  string entrada, str;
  vector<string> dicionario;

  while(getline(cin, entrada)){
    for(i = 0; i < entrada.length(); i++){
      if(isalpha(entrada[i])){
        if(isupper(entrada[i])){
          str += tolower(entrada[i]);
        }
        else{
          str += entrada[i];
        }
      }
      if(!isalpha(entrada[i]) || i == entrada.length()-1){
        if(str.length() > 0){
          for(j = 0; j < dicionario.size(); j++){
            if(str == dicionario[j]){
              achou = true;
              break;
            }
          }
          if(!achou) dicionario.push_back(str);
          str.clear(); achou = false;
        }
      }
    }
  }
  sort(dicionario.begin(), dicionario.end());
  for(i = 0; i < dicionario.size(); i++){
    cout << dicionario[i] << "\n";
  }
}
