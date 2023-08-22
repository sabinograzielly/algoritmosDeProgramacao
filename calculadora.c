#include <stdio.h>
//ANOTAÇÕES AULA 18/08/2023
// o int = 4 bytes ou 32 bits | 4 bilhões de números (-2bi até +2bi)
// long int usa lld%d
// unsigned long long int é um númer muito grande
// multiplicação * 
// numero1++ incrementa primeiro 
//numero1++ incrementa depois 
  int main(){
    int numero1;
    int numero2;
    int resultado;
    char operacao; 

    printf("Insira uma operacao: \n");
    scanf("%c", &operacao);

    printf("Insira dois numeros:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("Operacao: %c\n", operacao);

    if(operacao == '+')// caracter é com aspas simples
    {
    printf("Resultado: %d\n", numero1 + numero2);
    }else if (operacao == '-'){
    printf("Resultado: %d\n",numero1 - numero2);
    }else if (operacao == '*'){
       printf("Resultado: %d\n",resultado = numero1 * numero2);
    }else if (operacao == '/'){
        printf("Resultado: %d\n",resultado = numero1 / numero2);
    }else if (operacao == '%'){
        printf("Resultado: %d\n",resultado = numero1 % numero2);
    } else{
      printf("OPERAÇÃO INVALIDA!!!!\n");
    }

return 0;

}