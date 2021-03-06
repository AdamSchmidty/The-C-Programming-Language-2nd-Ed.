#include <stdio.h>
int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("Fahrenheit -> Celsius\n");
	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius); //%6.1f -> At least six characters wide, with one number after decimal point.	
		fahr += step;
	}

	return 0;
}
