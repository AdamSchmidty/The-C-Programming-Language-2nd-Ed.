#include <stdio.h>

//Copy input to output.
int main(){
	int c;
	/*
	Note:
	EOF is a constant defined in <stdio.h>
	In C, an assignment can appear as part of a larger expression.
	*/	
	while((c = getchar()) != EOF){	
		putchar(c);
	}
	return 0;
}
