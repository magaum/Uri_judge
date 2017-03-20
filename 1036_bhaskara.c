#include <stdio.h>
#include <math.h>
//accept
int main(){
	
	double A = 0, B = 0, C = 0, delta = 0, R1 = 0, R2 = 0, i = 1;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta = (B*B)-4*A*C;
	
	R1 = (-B+sqrt(delta))/(2*A);
		
	R2 = (-B-sqrt(delta))/(2*A);
	
	if (delta < 0 || A == 0){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
	}
	
	return 0;
}
