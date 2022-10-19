#include <iostream>

using namespace std;

int main(){
  int q, d, p, paginas;
  cin>>q;
  while(q != 0){
    cin>>d>>p;

    paginas = (q*d*p)/(p-q);

    if(paginas > 1){
      cout<<paginas<<" paginas\n";
    }
    else{
      cout<<paginas<<" pagina\n";
    }

    cin>>q;
  }
}
