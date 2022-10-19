#include <bits/stdc++.h>
using namespace std;

vector<int> prefixo, infixo, posfixo;

struct No {
  int conteudo;
  struct No* esquerda;
  struct No* direita;

  No(int valor){
    conteudo = valor;

    esquerda = NULL;
    direita = NULL;
  }
};

void insere(No* raiz, int valor){
  struct No* novo = new No(valor);

  struct No* atual = raiz;
  struct No* anterior = NULL;

  while(atual != NULL){
    anterior = atual;
    if(valor == atual->conteudo) return; //elemento ja existe na arvore
    if(valor > atual->conteudo){
      atual = atual->direita;
    }
    else{
      atual = atual->esquerda;
    }
  }
  if(valor > anterior->conteudo){
    anterior->direita = novo;
  }
  else{
    anterior->esquerda = novo;
  }
}

struct No* remove_atual(struct No* atual){
  struct No* no1;
  struct No* no2;

  if(atual->esquerda == NULL){
    no2 = atual->direita;
    return no2;
  }

  no1 = atual;
  no2 = atual->esquerda;
  while(no2->direita != NULL){
    no1 = no2;
    no2 = no2->direita;
  }

  if(no1 != atual){
    no1->direita = no2->esquerda;
    no2->esquerda = atual->esquerda;
  }

  no2->direita = atual->direita;
  return no2;
}

void remove(No* raiz, int valor){
  struct No* atual = raiz;
  struct No* anterior = NULL;

  while(atual != NULL){
    if(valor == atual->conteudo){
      if(atual == raiz){
        raiz = remove_atual(atual);
      }
      else{
        if(anterior->direita == atual){
          anterior->direita = remove_atual(atual);
        }
        else{
          anterior->esquerda = remove_atual(atual);
        }
      }
      return;
    }

    anterior = atual;
    if(valor > atual->conteudo){
      atual = atual->direita;
    }
    else{
      atual = atual->esquerda;
    }
  }
}

bool busca(No* raiz, int valor){
  struct No* atual = raiz;

  while(atual != NULL){
    if(atual->conteudo == valor) return true;

    if(valor > atual->conteudo){
      atual = atual->direita;
    }
    else{
      atual = atual->esquerda;
    }
  }

  return false;
}

void preordem(No* raiz){
  if(raiz != NULL){
    prefixo.push_back(raiz->conteudo);
    preordem(&(*raiz->esquerda));
    preordem(&(*raiz->direita));
  }
}

void inordem(No* raiz){
  if(raiz != NULL){
    inordem(&(*raiz->esquerda));
    infixo.push_back(raiz->conteudo);
    inordem(&(*raiz->direita));
  }
}

void posordem(No* raiz){
  if(raiz != NULL){
    posordem(&(*raiz->esquerda));
    posordem(&(*raiz->direita));
    posfixo.push_back(raiz->conteudo);
  }
}

int main(){
  int valor, i;
  bool primeiro = true;
  struct No* raiz;
  string entrada;

  while(cin >> entrada){
    if(entrada[0] == 'I' && entrada.size() == 1){
      cin >> valor;

      if(primeiro){
        raiz = new No(valor);
        primeiro = false;
      }
      else{
        insere(raiz, valor);
      }
    }
    else if(entrada[0] == 'R'){
      cin >> valor;
      remove(raiz, valor);
    }
    else if(entrada[0] == 'P' && entrada.size() == 1){
      bool achou = true;

      cin >> valor;
      achou = busca(raiz, valor);

      cout << valor << ' ';

      if(achou){
        cout << "existe\n";
      }
      else{
        cout << "nao existe\n";
      }
    }
    else if(entrada == "INFIXA"){
      inordem(raiz);

      for(i = 0; i < infixo.size(); i++){
        cout << infixo[i];

        if(i == infixo.size()-1){
          cout << '\n';
        }
        else{
          cout << ' ';
        }
      }
      infixo.clear();
    }
    else if(entrada == "PREFIXA"){
      preordem(raiz);

      for(i = 0; i < prefixo.size(); i++){
        cout << prefixo[i];

        if(i == prefixo.size()-1){
          cout << '\n';
        }
        else{
          cout << ' ';
        }
      }
      prefixo.clear();
    }
    else if(entrada == "POSFIXA"){
      posordem(raiz);

      for(i = 0; i < posfixo.size(); i++){
        cout << posfixo[i];

        if(i == posfixo.size()-1){
          cout << '\n';
        }
        else{
          cout << ' ';
        }
      }
      posfixo.clear();
    }
    entrada.clear();
  }
}
