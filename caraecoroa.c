#include <stdio.h>
#include <stdlib.h>

int main()
{
  int maria, joao;
  int jogadas, i, jogada;
  
  caras = 0;
  coroas = 0;
  scanf("%d", &jogada);
  while (jogada != 0)
  {
    for (i = 0; i < jogadas; i++)
    {
      scanf("%d", &jogada);
      if (jogada == 0) maria++;
      else             joao++;
    }
    printf("Maria ganhou %d vezes e Joao ganhou %d vezes\n", maria, joao);
  }
}
