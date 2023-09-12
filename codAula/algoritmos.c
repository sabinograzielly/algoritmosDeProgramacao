#include <stdio.h>
//ANOTAÇÕES DA AULA  
// o nome das das variaveis não podem ser iguais NUNCA, não pode começar com número, não pode ter espaço pode usar letra a partir do segundo caracter
// printf seria o IMPRIMA tal coisa
// %d imprimir em formato decimal 
// & da o endereço de memória da variavel
// SEMPRE um se em qualquer condição
//o se sempre vem primeiro 
// o se não é casado com o ultimo se ou senão
// if SE tem que vir primeiro sempre  
//else SENÃO 
// == para = um igual dois iguais checam e um salva na memória

int main(){

    int nota1;// declarando as variaveis de cada nota 
    int nota2;
    int nota3;
    int media;

    printf("---- Digite 3 notas ----\n");// \n é para pular a para próxima linha 

    printf("Nota 1:");
    scanf("%d", &nota1);
    printf("Nota 2:");//imprima nota 
    scanf("%d", &nota2);//leia nota x 
    printf("Nota 3:");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    if(media == 8){
        media = media +1;
        printf("Parabens! Voce ganhou um ponto extra!\n");
    }
    else if(media == 9){
        media = media +1;
        printf("Parabens! Voce gabaritou!\n");
    }
    if (media < 4){
         printf("Reprovado, muito ruim\n");
    }

printf("media: %d\n", media);

if (media <7 ){// se a nota for menor que 7 imprima reprovado
    printf("REPROVADO\n");
} else if(media > 8 ){
    printf("ESPETACULAR!!!!\n");// fazer uma terceira condição se a nota for maior que um vaor imprima espetacular
} 
else if (media > 9){
    printf("VOCE E O BIXAO");
}
else {
    printf("APROVADO!!;\n");
}

return 0 ;

}

