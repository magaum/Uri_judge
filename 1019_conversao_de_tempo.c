#include <stdio.h>

int main () {

	int tempo_digitado, acumulador;
	int tempo_horas = 0;
	int tempo_minutos = 0;
	int tempo_segundos = 0;

		scanf("%d", & tempo_digitado);

		if (tempo_digitado < 60){
		
		tempo_segundos = tempo_digitado;
		
		}
			while (tempo_digitado => 3600){
				acumulador = tempo_digitado - 3600;
				tempo_digitado = acumulador;
				tempo_horas += 1;
		
			}
			while (tempo_digitado => 60) {
				acumulador = tempo_digitado - 60;
				tempo_digitado = acumulador;
				tempo_minutos += 1;
				
			}

		printf ("%d:%d:%d\n", tempo_horas, tempo_minutos, tempo_segundos);
	
		return 0;
}
