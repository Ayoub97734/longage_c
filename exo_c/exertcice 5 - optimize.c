#include<stdio.h>

int *sort(float arr[], int size) {
	
	int i, j, minIndex;
	
	float temp;
	
	minIndex = 0;
	
	for (i = 0; i < size; i++) {
		
		minIndex = i;
		
		for (j = i; j < size; j++) {
			if (arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
		
	}
	
}

void printArray(float *arr,int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	
	printf("\n");
}

int main() {

	int size = 7;



	float arr[] = {7, 88, 23, 8, 1, 3.44, 100};

	printArray(arr, size);
		
	sort(arr, size);
	
	printArray(arr, size);
	
	return 0;
}