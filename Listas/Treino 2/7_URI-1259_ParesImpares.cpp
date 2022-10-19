#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, i, temp;
  vector <int> pares, impares;

  cin >> n;
  for(i = 0; i < n; i++){
    cin >> temp;
    if(temp%2 == 0){
      pares.push_back(temp);
    }
    else{
      impares.push_back(temp);
    }
  }

  sort(pares.begin(), pares.end());
  sort(impares.begin(), impares.end(), greater<int>());

  for(i = 0; i < pares.size(); i++){
    cout << pares[i] << '\n';
  }
  for(i = 0; i < impares.size(); i++){
    cout << impares[i] << '\n';
  }
}
