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
    printf("\n1 - Ordenar por ID\n2 - Ordenar por Data de Ajuizamento\n3 - Achar quantos processos est�o vinculados a uma determinada classe\n4 - Identificar quantos id_assuntos constam \n5 - Calcular tempo do processo\n");
    printf("\nEscolha: ");
	scanf("%d", &op);
	system("cls");
    i = lerArquivo(p, "processo_043_202409032338.csv");
    if (i == -1) {
        return 1;  // Saida em caso de erro na leitura
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
			char str[10],classeid[10];
        	printf("Informe o numero de id da classse(somente os numeros)\n");
        	fflush(stdin);
        	scanf("%s",&str);
			sprintf(classeid, "{%s}", str);
        	int num = acharclasse(p,i,classeid);
        	printf("estao vinculados %d a classe %s\n",num,str);
        	break;
			}
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
