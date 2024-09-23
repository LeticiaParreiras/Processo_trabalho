#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "processo.h"
#include <locale.h>

#define MAX 5000

int main(){
	setlocale(LC_ALL,"");
    Processo p[MAX];
    int i = 0;

    int op;
    printf("\t**MENU**\n");
    printf("\n1 - Ordenar por ID\n2 - Ordenar por Data de Ajuizamento\n3 - Achar quantos processos estão vinculados a uma determinada classe\n4 - Identificar quantos id_assuntos constam \n5 - Calcular tempo do processo\n");
    printf("\nEscolha: ");
	scanf("%d", &op);
	system("cls");
    i = lerArquivo(p, "dados.csv");
    if (i == -1) {
        return 1;  // Saída em caso de erro na leitura
    }

    switch (op) {
        case 1:
            ordenarId(p, i);
            criarArquivo(p, i);
            break;
        case 2:
            ordenarDt(p, i);
            criarArquivo(p, i);
            break;
        case 3:{
			char classeid[10];
        	printf("Informe o número de id da classse\n");
        	fflush(stdin);
        	fgets(classeid,10,stdin);
        	classeid[strcspn(classeid, "\n")] = 0;
        	int num = acharclasse(p,i,classeid);
        	printf("estão vinculados %d a classe %s\n",num,classeid);
        	break;}
        case 4 :{
        	int numachdos = numassuntos(p,i);
        	printf("Costam %d id de assunto na tabela",numachdos);
			break;
		}
        case 5:
        	calculardias(p,i);
        	break;
        	
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
