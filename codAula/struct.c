#include <stdio.h>
int main(){

struct aluno aluno1 ; // declarando varialvel do "tipo" struct aluno 
 
 printf ("Insira dados do aluno:\n");
 printf("Nome ");
 fgets(aluno1.nome , 50, stdin);
0
 printf("Matricula: ");
 scanf("%d", &aluno1.matricula);

 printf("Notas: ");
 scanf("%f %f %f", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);

 printf("Informacoes do aluno:\n");
 printf("Nome: %smatricula: %dnnotas: %f %f %f\n, aluno1.nome, ")













    return 0;
}
