/*
author:jivfur
date: 06/23/2017
Description: Como programar en C/C++ ejercicio 3.17
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	float gallons = 1;
	float milles = 0;
	float overallGallons = 0;
	float overallMilles = 0;
	printf("Enter the gallons used (-1 to end): ");
	scanf_s("%f",&gallons);
	while (gallons != -1) {
		printf("Enter the miles driven: ");
		scanf_s("%f", &milles);
		if (gallons != 0) {
			printf("The miles/gallon for this tank was %.4f\n", milles / gallons);
			overallGallons += gallons;
			overallMilles += milles;
		}
		printf("Enter the gallons used (-1 to end): ");
		scanf_s("%f", &gallons);
	}

	printf("The overall average miles/gallon was %.4f\n", overallMilles / overallGallons);
	system("pause");
	return 1;
}