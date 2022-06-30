#include <stdio.h>
//Udemy Ponteiros Exercicio

void incrementa (int contador){
 
   printf("antes de incrementar \n");
   printf("o contador vale %d\n", contador);
   printf("O endereço de memoria é %d\n", &contador);
   
   printf("depois de incrementar \n");
   
   printf("O contador vale %d \n", ++contador);
   printf("o endereço de memoria é %d\n", &contador);
 } 
//valor++ incrementa depois de imprimir  (valor +1);
//++valor incrementa antes de imprimir   (valor +1);
//valor-- decremta depois de imprimir    (valor -1);
//--valor decrementa antes de imprimir   (valor -1);

int main()  {
//quando declaramos uma variavel a linguagem C
//aloca uma espaço na memoria para esse valor
  int contador = 20;
   printf("Antes de Incrementar \n");
   printf("o contador vale %d\n", ++contador);
   printf("o endereço de memoria é %d\n", contador);
 
 // copia por valor
  incrementa(contador);

   printf("depois de incrementar\n");
    printf("o contador vale %d\n", contador);
   printf("o endereço de memoria e %d\n", &contador);

return 0;

}

