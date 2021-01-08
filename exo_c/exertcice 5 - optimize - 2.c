#include<stdio.h>

float arr[] = {7, 88, 23, 8, 1, 3.44, 100};

void sort() {
	
	int i, j, size = 7, minIndex;
	
	float temp;
	
	
	for (i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	printf("\n");
	
	minIndex = 0;
	
	for (i = 0; i < size; i++) {
		
		minIndex = i;
		
//		printf("%.2f ", min);
		for (j = i; j < size; j++) {
			if (arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
		
//		printf("%.2f ", min);
		
	}
	
	for (i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	
	
}

int main() {
	
	sort();
	
	return 0;
}