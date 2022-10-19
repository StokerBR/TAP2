#include <bits/stdc++.h>

using namespace std;

bool sortNome(const pair<int, string> &a, const pair<int, string> &b){
  if(strcmp(a.second.c_str(), b.second.c_str()) < 0){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int n, i, j, total = 0;
  bool achou = false;

  cin >> n;
  for(i = 0; i < n; i++){
    string input;
    vector< pair<int, string> > arvores;
    if(i == 0){
      getchar();
      getchar();
    }

    getline(cin, input);
    while(input.size() != 0){
      total++;

      if(arvores.size() == 0){
        arvores.push_back(make_pair(1, input));
      }
      else{
        for(j = 0; j < arvores.size(); j++){
          if(arvores[j].second == input){
            arvores[j].first++;
            achou = true;
            break;
          }
        }
        if(!achou) arvores.push_back(make_pair(1, input));
      }
      achou = false;
      if(cin.eof()) break;
      getline(cin, input);
    }

    sort(arvores.begin(), arvores.end(), sortNome);

    if(i > 0) cout << '\n';
    for(j = 0; j < arvores.size(); j++){
      cout << arvores[j].second << ' ' << fixed << setprecision(4) << ((double)arvores[j].first/(double)total)*100 << '\n';
    }

    total = 0;
  }
}
