#include <stdio.h>

int main(void) {
  
  char nome[30];
  int ano, idade, dif;

  printf ("Nome: \n");
  scanf("%s", &nome);

  printf("Ano de Nascimento: \n");
  scanf("%d", &ano);

  idade=2022-ano;

  if(idade>=18){
    dif=idade - 18;
    printf("%s, atingiu a maioridade há %d anos", nome, dif);
  }

  if(idade<18){
    dif = 18 - idade;
    printf("%s, não atingiu a maioridade. Faltam %d anos.", nome, dif);
  }
}