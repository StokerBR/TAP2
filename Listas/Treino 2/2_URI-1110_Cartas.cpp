#include <iostream>
#include <vector>

using namespace std;

int main(){
  int cartas, i;

  cin >> cartas;
  while(cartas){
    vector<int> deque, descartadas;
    for(i = 0; i < cartas; i++){
      deque.push_back(i+1);
    }
    while(deque.size() >= 2){
      descartadas.push_back(deque[0]);
      deque.erase(deque.begin());
      deque.push_back(deque[0]);
      deque.erase(deque.begin());
    }
    cout << "Discarded cards: ";
    for(i = 0; i < cartas-1; i++){
      cout << descartadas[i];
      if(i == cartas-2){
        cout << '\n';
      }
      else{
        cout << ", ";
      }
    }
    cout << "Remaining card: " << deque[0] << '\n';
    cin >> cartas;
  }
}
