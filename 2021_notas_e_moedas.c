#include <stdio.h>

int main () {

	float valor, acumulador;
	float contador100 = 0;
	float contador50 = 0;
	float contador20 = 0;
	float contador10 = 0;
	float contador5 =  0;
	float contador2 = 0;
	float contador1 = 0;
	float contador0_50 = 0;
	float contador0_25 = 0; 
	float contador0_10 = 0; 
	float contador0_05 = 0;
	float contador0_01 = 0;
		scanf("%f", & valor);

			while (valor >= 100) {
				acumulador = valor - 100;
				valor = acumulador;
				contador100 += 1;
				}
			while (valor >= 50) {
				acumulador = valor - 50;
		               	valor = acumulador;
				contador50 += 1;
				}
			while (valor >= 20) {
				acumulador = valor - 20;
				valor = acumulador;
				contador20 += 1;
				}
			while (valor >= 10) {
				acumulador = valor - 10;
			       	valor = acumulador;
				contador10 += 1;
				}
			while (valor >= 5) {
				acumulador = valor - 5;
				valor = acumulador;
				contador5 += 1;

				}
			while (valor >= 2) {
				acumulador = valor - 2;
		               	valor = acumulador;
				contador2 += 1;
				}
			while (valor >= 1) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador1 += 1;
				}
			while (valor >= 0.50) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador0_50 += 1;
				}
			while (valor >= 0.25) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador0_25 += 1;
				}
			while (valor >= 0.10) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador0_10 += 1;
				}
			while (valor >= 0.05) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador0_05 += 1;
				}
			while (valor >= 0.01) {
				acumulador = valor - 1;
		                valor = acumulador;
				contador0_01 += 1;
				}
		printf ("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\nMOEDAS:\n%d MOEDAS(s) de R$ 1,00\n%d MOEDAS(s) de R$ 0,50\n%d MOEDAS(s) de R$ 0,25\n%d MOEDAS(s) de R$ 0,10\n%d MOEDAS(s) de R$ 0,05\n%d MOEDAS(s) de R$ 0,01\n", contador100, contador50, contador20, contador10, contador5, contador2, contador1, contador0_50, contador0_25, contador0_10, contador0_05, contador0_01);	
	return 0;
}

//Wrong answer (90%)

