#include "aluno.h"

#define MAX 20

typedef struct _fila{
	int ini, fim, qtd;
	aluno alu[MAX];
}fila;

fila inicia_fila(void) {
	fila f;
	f.ini = 0;
	f.fim = 0;
	f.qtd = 0;
	return f;
}

int vazia(fila *f){
	if(f->qtd == 0) {
		return 1;
	} 
	return 0;
}

int cheia(fila *f) {
	if(f->qtd == MAX) {
		return 1;
	}
	return 0;
}

void inserir_elemento(fila *f){
	if(cheia(f) == 0){
		f->alu[f->fim] = insere_aluno();
		f->fim++;
		f->qtd++;
	} else {
		printf("Impossivel inserir: fila cheia!\n");
	}
}

void remover_elemento(fila *f) {
	int i;
	if(vazia(f) == 0) {
		exibe_aluno(f->alu[f->ini]);
		for(i = 0; i < f->qtd; i++) {
			f->alu[i] = f->alu[i+1];
		}
		f->fim--;
		f->qtd--;
	} else {
		printf("Impossivel remover: fila vazia!\n");
	}
}

void exibe_todos_alunos(fila *f) {
	while(vazia(f) == 0){
		remover_elemento(f);
	}
}