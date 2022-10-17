#include <stdio.h>

int main(void) {
  char nome[30];
  int ano;

  printf ("Nome: \n");
  scanf("%s", &nome);

  printf("Ano de Nascimento: \n");
  scanf("%d", &ano);

  idade = 2022-ano;

  if(idade>=18){
    dif = idade - 18;
    printf("%s Atingiu a maioridade", nome, dif);
  }

  if(idade<18){
    dif = 18 - idade;
    printf("%s, Não atingiu a maioridade. Faltam %d anos.", nome, dif);
  }
}