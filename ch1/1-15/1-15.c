#include <stdio.h>

int FToC(int lower, int upper, int step);

int main(){
	FToC(0, 300, 20);
	return 0;
}

int FToC(int lower, int upper, int step){
	int fahr, celsius;
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
	

}
