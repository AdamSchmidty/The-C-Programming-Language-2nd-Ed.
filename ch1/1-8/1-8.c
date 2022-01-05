#include <stdio.h>
int main(){
	int bCount = 0;
	int tCount = 0;
	int nCount = 0;
	int c;

	while((c = getchar()) != EOF){
		if(c == ' '){
			bCount++;
		}
		else if(c == '\n'){
			nCount++;
		}
		else if(c == '\t'){
			tCount++;
		}	
	}	
	printf("Blanks: %d, Tabs: %d, New Lines: %d", bCount, tCount, nCount);
	return 0;
}
