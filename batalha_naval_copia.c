#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int tabuleiro[TAMANHO_TABULEIRO]
[TAMANHO_TABULEIRO];

void inicializarTabuleiro() {
  for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
      tabuleiro[i][j] = 0; 
    }
     }
}

void exibirTabuleiro() {
  printf("  ");
  for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
    printf("%d", j); 

  }
  printf("\n");
  for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
printf("%d", i);
for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
  printf("%d", tabuleiro[i][j]);

}
printf("\n");

}

printf("\n");
  
}

int main () {
inicializarTabuleiro();
printf("Tabuleiro inicial:\n");
exibirTabuleiro();

  return 0;

}
