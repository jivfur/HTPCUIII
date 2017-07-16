/*
author: jivfur
date: 2017/07/15
description: 318
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int numCta;
	float saldo;
	float nSaldo;
	float limite;
	float credito;
	float cargos;

	printf("Num de Cta: (-1 para salir): ");
	scanf_s("%d", &numCta);
	while (numCta != -1) {
		printf("Saldo Inicial: ");
		scanf_s("%f", &saldo);
		printf("Total de Cargos: ");
		scanf_s("%f", &cargos);
		printf("Total de Creditos: ");
		scanf_s("%f", &credito);
		printf("Limite de Credito: ");
		scanf_s("%f", &limite);
		nSaldo = saldo + credito;
		if (nSaldo > limite) {
			printf("Num de Cuenta: %d\n", numCta);
			printf("Limite de Credito: %.3f\n", limite);
			printf("Nuevo saldo: %.3f\n", nSaldo);
			printf("Limite de Credito Excedido\n");
		}
		printf("Num de Cta: (-1 para salir): ");
		scanf_s("%d", &numCta);
	}
}
