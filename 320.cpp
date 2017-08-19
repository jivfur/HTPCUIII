/*
author: jivfu
date:2017/08/19
description: Ejercicio 320 Deitel&Deitel
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	float principal;
	float rate;
	float days;
	printf("Principal: ");
	scanf_s("%f", &principal);
	while (principal > 0) {
		printf("Rate: ");
		scanf_s("%f", &rate);
		printf("Days ");
		scanf_s("%f", &days);
		printf("Interes: %0.2f\n", principal*rate*days / 365);
		system("pause");
		system("cls");
		printf("Principal: ");
		scanf_s("%f", &principal);
	}
}