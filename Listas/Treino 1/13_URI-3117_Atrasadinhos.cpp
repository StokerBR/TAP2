#include <iostream>

using namespace std;

int main(){
  int alunos, minimo, tmp, q = 0, i;
  bool yes = false;
  while(cin >> alunos >> minimo){
    for(i = 0; i < alunos; i++){
      cin >> tmp;
      if(tmp <= 0) q++;
      if(q >= minimo) yes = true;
    }
    if(yes){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
    yes = false; q = 0;
  }
}
