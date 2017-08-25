#include "../funcoes_de_string.h"

typedef struct aluno {
	char nome[100], matricula[50];
	float notas[4];
}aluno;

aluno insere_aluno(void){
	aluno a;
	int i;
	printf("Digite o nome: ");
	leString(a.nome);
	printf("Digite a matricula: ");
	leString(a.matricula);
	for(i = 0; i < 4; i++) {
		printf("Digite a %d nota: ", i+1);
		scanf("%f", &a.notas[i]);
	}
	return a;
}

void exibe_aluno(aluno a) {
	int i;
	float soma = 0;
	printf("Nome: %s\nMatricula: %s\n", a.nome, a.matricula);
	for(i = 0; i < 4; i++) {
		printf("nota %d: %.2f\n", i+1, a.notas[i]);
		soma = soma + a.notas[i];
	}
	printf("Media: %.2f\n", soma/4);
}
