#include <stdio.h>
#include <stdlib.h>

#include "fila.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	fila f;
	int op;
	f = inicia_fila();
	do{
		printf("[ 1 ] Inserir\n[ 2 ] Remover\n[ 3 ] Resetar\n[ 0 ] Sair\n=>");
		scanf("%d", &op);
		switch(op) {
			case 0:
				printf("Tchau!\n");
				break;
			case 1:
				inserir_elemento(&f);
				break;
			case 2:
				remover_elemento(&f);
				break;
			case 3: 
				f = inicia_fila();
				break;
			default:
				printf("opcao invalidade, digite novamente!\n");
		}
	}while(op != 0);
	
	return 0;
}
