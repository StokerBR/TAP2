#include <bits/stdc++.h>
using namespace std;

bool sortTarefas(const pair<int, int> &a, const pair<int, int> &b){
  if(a.second != b.second){
    return a.second < b.second;
  }
  return a.first > b.first;
}

int main(){
  int n, h, v, t, i;

  while(cin >> n >> h){
    int dinheiroPerdido = 0, horasPassadas = 0;
    vector< pair<int, int> > tarefas;

    for(i = 0; i < n; i++){
      cin >> v >> t;

      tarefas.push_back(make_pair(v, t));
    }

    sort(tarefas.begin(), tarefas.end(), sortTarefas);

    for(i = 0; i < n; i++){
      if(tarefas[i].second <= horasPassadas){
        dinheiroPerdido += tarefas[i].first;
      }
      else{
        horasPassadas++;
      }
    }

    cout << dinheiroPerdido << '\n';
  }
}
