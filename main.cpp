#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
    
    char lista[10][20];
    char nome[20];
    riempi(lista);
    riempi2(nome);
    conf(lista, nome);
    analisi(lista, nome);
    
  return 0;
}
