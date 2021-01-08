#include <stdio.h>

int i, intPositive[100], lastPos = 0, inputValue;

int main() {
	
	
	printf("Entrer un eniter positive: ");
	scanf("%d", &inputValue);
		
	
	while (inputValue > 0) {
	
		intPositive[lastPos] = inputValue;
		printf("Entrer un eniter positive: ");
		scanf("%d", &inputValue);
		lastPos++;
		
	}
	
	printf("{ ");
	
	for (i = 0; i < lastPos; i++) {
		
		printf("%d", intPositive[i]);
		if (i != lastPos - 1) {
			printf(", ");
		}
		
	}
	
	printf(" }");
	
	
	
	return 0;
}