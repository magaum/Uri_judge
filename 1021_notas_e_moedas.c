#include <stdio.h>

//Accepted

int main (){

	int nota_100 = 0, nota_50 = 0, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_2 = 0, moeda_1 = 0, moeda_50 = 0, moeda_25 = 0, moeda_10 = 0, moeda_5 = 0, moeda_0_1 = 0;
	double numero;

	scanf("%lf", &numero);

	if (numero >= 100){
		nota_100 = numero / 100;
		numero = numero - (nota_100 * 100.0);
	}

	if (numero >= 50){
		nota_50 = numero / 50;
		numero  = numero - (nota_50 * 50.0);
	}
	
	if (numero >= 20){
		nota_20 = numero / 20;
		numero -= (nota_20 * 20.0);
	}

	if (numero >= 10){
		nota_10 = numero / 10;
		numero -= (nota_10 * 10.0);
	}
	
	if (numero >= 5){
		nota_5 = numero / 5;
		numero -= (nota_5 * 5.0);
	}

	if (numero >= 2){
		nota_2 = numero / 2;
		numero -= (nota_2 * 2.0);
	}

	numero *= 100;

	if (numero >= 100){
		moeda_1 = numero / 100;
		numero -= (moeda_1 * 100);
	}

	if (numero >= 50){
		moeda_50 = numero / 50;
		numero -= (moeda_50 * 50);
	}

	if (numero >= 25){
		moeda_25 = numero / 25;
		numero -= (moeda_25 * 25);
	}

	if (numero >= 10){
		moeda_10 = numero / 10;
		numero -= (moeda_10 * 10);
	}

	if (numero >= 5){	
		moeda_5 = numero / 5;
		numero -= (moeda_5 * 5);
	}
	
	if (numero >= 1) {
		moeda_0_1 = numero;
	}

	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, moeda_1, moeda_50, moeda_25, moeda_10, moeda_5, moeda_0_1);

	
	return 0;
	
}
