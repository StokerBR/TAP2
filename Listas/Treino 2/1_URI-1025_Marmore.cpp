#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n, q, cases = 1, busca, temp, i, j;
  bool achou = false;

  cin >> n >> q;
  while(n != 0 && q != 0){
    vector<int> marbles;
    for(i = 0; i < n; i++){
      cin >> temp;
      marbles.push_back(temp);
    }
    sort(marbles.begin(), marbles.end());
    cout << "CASE# " << cases << ":\n";
    for(i = 0; i < q; i++){
      cin >> busca;
      for(j = 0; j < n; j++){
        if(busca == marbles[j]){
          cout << busca << " found at " << j + 1 << '\n';
          achou = true;
          break;
        }
      }
      if(!achou) cout << busca << " not found\n";
      achou = false;
    }
    cases++; marbles.clear();
    cin >> n >> q;
  }
}
