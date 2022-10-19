#include <bits/stdc++.h>
using namespace std;

bool ePar(int n){

  return (n % 2 == 0);

}

bool sortModulo(const pair<int, int> &a, const pair<int, int> &b){

  if(a.first == b.first){

    if(ePar(a.second)){

      if(ePar(b.second)){

        return (a.second < b.second);

      } else {

        return false;

      }

    } else {

      if(ePar(b.second)){

        return true;

      } else {

        return (a.second > b.second);

      }

    }

  } else {

    return (a.first < b.first);

  }

}

int main() {

  int n, m, i, valor;
  vector< pair<int, int> > lista;

  while(cin >> n >> m && n){

    for(i = 0; i < n; i++){

      cin >> valor;

      lista.push_back(make_pair(valor%m, valor));

    }

    // sort(lista.begin(), lista.end());
    sort(lista.begin(), lista.end(), sortModulo);

    cout << n << ' ' << m << '\n';

    for(i = 0; i < n; i++){

      cout << lista[i].second << '\n';

    }

    lista.clear();

  }

  cout << "0 0\n";

}
