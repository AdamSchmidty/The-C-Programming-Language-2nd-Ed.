#include <stdio.h>
int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 
	upper = 150;
	step = 1;

	//Convert 0-150 deg C into Fahrenheit	
	celsius = lower;
	printf("Celsius -> fahr\n");
	while(celsius <= upper){
		fahr = ((9.0 / 5.0) * celsius + 32); 
		printf("%3.0f %6.1f\n", celsius, fahr); //%6.1f -> At least six characters wide, with one number after decimal point.	
		celsius += step;
	}

	return 0;
}
