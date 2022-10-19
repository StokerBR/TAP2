#include <bits/stdc++.h>
using namespace std;

struct ProdutoFeira{
  string nome;
  float preco;
};

int main(){
  int n, q1, q2, i, j, k;
  float total = 0;

  cin >> n;
  for(i = 0; i < n; i++){

    cin >> q1;
    ProdutoFeira produtos[q1];
    for(j = 0; j < q1; j++){
      cin >> produtos[j].nome >> produtos[j].preco;
    }

    cin >> q2;
    for(j = 0; j < q2; j++){
      string nome;
      int quantidade;

      cin >> nome >> quantidade;
      for(k = 0; k < q1; k++){
        if(produtos[k].nome == nome){
          total += produtos[k].preco * (float)quantidade;
          break;
        }
      }
    }
    printf("R$ %.2f\n", total);
    total = 0;
  }
}
