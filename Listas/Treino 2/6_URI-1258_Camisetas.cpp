#include <bits/stdc++.h>

using namespace std;

bool sortNome(const pair<int, string> &a, const pair<int, string> &b){
  if(strcmp(a.second.c_str(), b.second.c_str()) < 0 && a.first == b.first){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int n, i;
  bool primeiro = true;
  char tamanho;
  string nome, cor;

  cin >> n;
  getchar();
  while(n){
    vector< pair<int, string> > branco;
    vector< pair<int, string> > vermelho;

    for(i = 0; i < n; i++){
      getline(cin, nome);
      cin >> cor >> tamanho;
      if(cor == "branco"){
        switch(tamanho){
          case 'P':
            branco.push_back(make_pair(1, nome));
            break;
          case 'M':
            branco.push_back(make_pair(2, nome));
            break;
          case 'G':
            branco.push_back(make_pair(3, nome));
            break;
        }
      }
      else if(cor == "vermelho"){
        switch(tamanho){
          case 'P':
            vermelho.push_back(make_pair(1, nome));
            break;
          case 'M':
            vermelho.push_back(make_pair(2, nome));
            break;
          case 'G':
            vermelho.push_back(make_pair(3, nome));
            break;
        }
      }
      getchar();
    }

    sort(branco.begin(), branco.end());
    stable_sort(branco.begin(), branco.end(), sortNome);
    sort(vermelho.begin(), vermelho.end());
    stable_sort(vermelho.begin(), vermelho.end(), sortNome);

    if(!primeiro) cout << '\n';

    for(i = 0; i < branco.size(); i++){
      switch(branco[i].first){
        case 1:
          tamanho = 'P';
          break;
        case 2:
          tamanho = 'M';
          break;
        case 3:
          tamanho = 'G';
          break;
      }
      cout << "branco " << tamanho << ' ' << branco[i].second << '\n';
    }
    for(i = 0; i < vermelho.size(); i++){
      switch(vermelho[i].first){
        case 1:
          tamanho = 'P';
          break;
        case 2:
          tamanho = 'M';
          break;
        case 3:
          tamanho = 'G';
          break;
      }
      cout << "vermelho " << tamanho << ' ' << vermelho[i].second << '\n';
    }
    primeiro = false;
    cin >> n;
    getchar();
  }
}
