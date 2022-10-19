#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
  string sentenca;
  bool maiusculo = true;
  int i;
  while(getline(cin, sentenca)){
    for(i = 0; i < sentenca.size(); i++){
      if(maiusculo && sentenca[i] != ' '){
        if(!isupper(sentenca[i])){
          sentenca[i] = toupper(sentenca[i]);
          maiusculo = false;
        }
        else{
          maiusculo = false;
        }
      }
      else if(!maiusculo && sentenca[i] != ' '){
        if(isupper(sentenca[i])){
          sentenca[i] = tolower(sentenca[i]);
          maiusculo = true;
        }
        else{
          maiusculo = true;
        }
      }
    }
    cout<<sentenca<<'\n';
    maiusculo = true;
  }
}
