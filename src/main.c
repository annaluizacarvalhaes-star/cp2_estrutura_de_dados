#include<stdio.h>
// Codicionais
int main() {
    float nota1, nota2, media;
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);

      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);

    media = nota1 + nota2 / 2; 

    if (media >= 6 && media <=10){
      printf("O aluno esta aprovado, com a media igual a: ", media );

    }else if(media < 6 && media >= 4){
      printf("O aluno esta de recuperacao, com a media:", media );
    
    }else{ 
      printf("O aluno esta retido");
    }
    
    return 0;
}