#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ALUNOS 50

typedef struct {
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos [MAX_ALUNOS];
 void menu();
 void cadastrar();
 void remover();
 void reprovados();
 void pesquisar();
 void listar();

 int main(int argc, char const *argv[])
 {
     menu();
     return 0;
 }

 void menu(){
     int op;
    printf("\n1 - Cadastrar Aluno\n2 - Remover Aluno");
    printf("\n3 - Alunos Reprovados\n4 - Pesquisar Aluno");
    printf("\n5 - Listar Aluos\n0 - Sair\n");

    do{
    system("cls");
    printf("\n1 - Cadastrar Aluno\n2 - Remover Aluno");
    printf("\n3 - Alunos Reprovados\n4 - Pesquisar Aluno");
    printf("\n5 - Listar Aluos\n0 - Sair\n");
    scanf("%d", &op);
    getchar();
    switch(op){
        case 1:
            cadastrar();
        
        break;
        case 2:
            remover();
        
        break;
        case 3:
            reprovados();

        break;
        case 4:
            pesquisar();

        break;
        case 5:
            listar();

    }
    getchar();

    }while(op != 0);


 }
 void cadastrar(){
 	int i;
     system("cls");
     char nome[50];
     float notas[4];
     int op;
     do{
         printf("\nDigite o Nome :");
         fgets(nome, sizeof(nome),stdin);
         printf("\n1 Bimestre :");
         scanf("%f", &notas[0]);
         printf("\n2 Bimestre :");
         scanf("%f", &notas[1]);
         printf("\n3 Bimestre :");
         scanf("%f", &notas[2]);
         printf("\n4 Bimestre :");
         scanf("%f", &notas[3]);
         for (  i = 0; i < MAX_ALUNOS; i++)
         {

             if ( alunos[i].ativo == 0)
             {
                  alunos[i].notas[0] = notas[0];
                  alunos[i].notas[1] = notas[1];
                  alunos[i].notas[2] = notas[2];
                  alunos[i].notas[3] = notas[3];
                  strcpy(alunos[i].nome, nome);
                  alunos[i].ativo =1;
                  break;
             }

         }
         
         

         printf("\n1 - Continuar\n0 - Sair");
         scanf("%d", &op);
         getchar();



     }while(op != 0);

 }
 void remover(){
     int matricula;
     listar();
     printf("\n Digite a matircula do aluno a ser removido:");
     scanf("%d", &matricula);
     --matricula;
     alunos[matricula].ativo=0;
     printf("Aluno foi excluido com sucesso!\n");
     getchar();


 }
 void reprovados(){
 	int i;
     system("cls");
     float media;
     printf("\n LISTA DE ALUNOS REPROVADOS\n");
     for ( i = 0; i < MAX_ALUNOS; i++)
     { 
         if(alunos[i].ativo ==1)
         {
            media = 0;
            media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
            media = media/4;
        if(media<7.0)
        {


        
         printf("Matricula: %d\n", i+1);
         printf("Nome: %s\n", alunos[i].nome);
         printf("1 Bim: %0.2f\n", alunos[i].notas[0]);
         printf("2 Bim: %0.2f\n", alunos[i].notas[1]);
         printf("3 Bim: %0.2f\n", alunos[i].notas[2]);
         printf("4 Bim: %0.2f\n", alunos[i].notas[3]);
         printf("\n---------------\n");
     }
     }
     getchar();

 }
 }
 void pesquisar(){
 	int i;
     char nome[50];
     int op;

     do{
         system("cls");
         printf("\nDigite o nome do aluno para pesquisar:");
        fgets(nome, sizeof(nome), stdin);
     for (i = 0; i < MAX_ALUNOS; i++)
     {
         if(strstr(alunos[i].nome, nome)!= NULL)
        {
            printf("Matricula: %d\n", i+1);
         printf("Nome: %s\n", alunos[i].nome);
         printf("1 Bim: %0.2f\n", alunos[i].notas[0]);
         printf("2 Bim: %0.2f\n", alunos[i].notas[1]);
         printf("3 Bim: %0.2f\n", alunos[i].notas[2]);
         printf("4 Bim: %0.2f\n", alunos[i].notas[3]);
         printf("\n---------------\n");
        }
     }
        printf("\nDigite 0 para sair ou 1 para nova pesquisa");
        scanf("%d", &op);
        getchar();

     }while(op != 0);
     

 }

     
         
 void listar(){
 	int i;
     system("cls");
     printf("\n LISTA DE ALUNOS\n");
     for ( i = 0; i < MAX_ALUNOS; i++)
     { 
         if(alunos[i].ativo ==1){
         printf("Matricula: %d\n", i+1);
         printf("Nome: %s\n", alunos[i].nome);
         printf("1 Bim: %0.2f\n", alunos[i].notas[0]);
         printf("2 Bim: %0.2f\n", alunos[i].notas[1]);
         printf("3 Bim: %0.2f\n", alunos[i].notas[2]);
         printf("4 Bim: %0.2f\n", alunos[i].notas[3]);
         printf("\n---------------\n");
     }
     }
     getchar();
     
 }
 
 

