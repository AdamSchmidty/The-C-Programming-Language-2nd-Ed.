#include <stdio.h>

#define UPPER 300
#define STEP 20
#define LOWER 0 
//Print fahrenheit-celsius table 
int main(){
	for(int fahr = UPPER; fahr >= LOWER; fahr -= STEP){
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}
