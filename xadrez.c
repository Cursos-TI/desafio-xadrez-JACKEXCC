#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//movimentacao do torre

void torre(int casa) {
  if (casa > 0) {
      printf("direita\n");  // Imprime o valor atual de n
      torre(casa - 1);  // Chama a si mesma com n - 1
  }
}

void bispo(int c) {
  if (c > 0) {
      printf("cima/direita\n");  // Imprime o valor atual de n
      bispo(c - 1);  // Chama a si mesma com n - 1
  }
}

void rainha(int R) {
  if (R > 0) {
     printf("esquerda\n ");  // Imprime o valor atual de n
      rainha(R - 1);  // Chama a si mesma com n - 1
  }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
     
    torre(5);
    bispo(5);
    rainha(8);

//movimento cavalo

   int cavalo = 1;

while (cavalo--)
{
 for (int passo = 0; passo < 2; passo++)
 {
 printf("cavalo cima\n");
 }
 printf("cavalo direita\n");
}

int M = 8;

   
for (int vertical = 5; vertical <= M; vertical++) {
   for (int horizontal = 5; horizontal <= vertical; horizontal++) {
       printf("bispo/horizontal\n");
   }
   printf("bispo/vertical\n");
}



return 0;

 




}

   

