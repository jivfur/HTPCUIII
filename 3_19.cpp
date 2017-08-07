/*
author:@jivfu
date:2017-08-06
description: Ejercicio 319 Deitel & Deitel
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	float sales;
	printf("Ventas (-1) para salir: ");
	scanf_s("%f", &sales);
	while (sales > 0) {
		printf("Salario: %.3f\n", 0.09*sales + 200);
		system("pause");
		system("cls");
		printf("Ventas (-1) para salir: ");
		scanf_s("%f", &sales);
	}

}