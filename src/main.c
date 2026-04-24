#include<stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

printf("==============================\n");
printf("     SISTEMA DAS LULUZINAS     \n");
printf("==============================\n");

printf("1 - Inserir notas\n");
printf("2 - Calcular media\n");
printf("3 - Verificar situacao\n");
printf("4 - Exibir resultado\n");
printf("5 - Calcular derivada\n");
printf("4 - Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao){

case1:
printf("Digite a nota 1: ");

scanf("%f", %nota)
printf("Digite a nota 2: ");

case 3:
if(media >= 7.0){
printf("Situacao: Aprovado! \n");
}else if(media >= 5.0){ 
printf("Situacao: Recuperação! \n");
}
break;

case 4:
printf("----Resultados----\n");
printf("Notas: %.1f e %.1f\n", nota1, nota2);
printf("Media Final: %.1f\n", media);
break;

case 5:
printf("Funcionalidade de Derivada. \n");
break;

case 6:
printf("Saindo do sistema....\n");
brek;

default:
printf("Opcao invalida! Tente novamente.\n");
}

}


 
    return 0;
}
 
