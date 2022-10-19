#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool sortSecond(const pair<int, char> &a, const pair<int, char> &b){
    if((int)a.second > (int)b.second && a.first == b.first){
      return true;
    }
    else{
      return false;
    }
}

int main(){
  int i, j, tamanho;
  bool primeiro = true, achou = false;
  string input;

  while(getline(cin, input)){
    vector< pair<int, char> > frequencia;

    tamanho = input.length();
    for(i = 0; i < tamanho; i++){
      if(i == 0){
        frequencia.push_back(make_pair(1, input[0]));
      }
      else{
        for(j = 0; j < frequencia.size(); j++){
          if(frequencia[j].second == input[i]){
            frequencia[j].first++;
            achou = true;
            break;
          }
        }
        if(!achou) frequencia.push_back(make_pair(1, input[i]));
      }
      achou = false;
    }

    sort(frequencia.begin(), frequencia.end());
    stable_sort(frequencia.begin(), frequencia.end(), sortSecond);
    if(!primeiro) cout << '\n';
    for(i = 0; i < frequencia.size(); i++){
      cout << (int)frequencia[i].second << ' ' << frequencia[i].first << '\n';
    }
    primeiro = false;
  }
}
