#include<stdio.h>

float arr[] = {7, 88, 23, 8, 1, 3.44, 100};

void sort() {
	
	int i, j, size = 7;
	
	float temp;
	
	for (i = 0; i < size; i++) {
		
		for (j = 0; j < size; j++) {
			if (arr[j] > arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for (i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	
	
}

int main() {
	
	sort();
	
	return 0;
}