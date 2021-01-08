#include<stdio.h>

void printArray(float *arr,int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	
	printf("\n");
}

void search(float *arr, int size, float search) {
	
	int start = 0, end = size, pos, exist = 0;
	
	while(start < end) {
		
		
		if (arr[start] == search) {
			pos = start;
			exist = 1;
			break;
		} else if (arr[end] == search) {
			pos = end;
			exist = 1;
			break;
		} else {
			start ++;
			end --;
		}
		
	}
	
	
	printf("pos %d, Value %f", pos, arr[pos]);
	
}

int main() {

	int size = 7;

	float arr[] = {7, 88, 23, 8, 1, 3.44, 100};

//	printArray(arr, size);
	
//	printArray(arr, size);
	
	search(arr, size, 100);

	
	return 0;
}