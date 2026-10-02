#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int n);

int main(){

	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int *arr;
	arr = (int *) calloc(n, sizeof(int));

	if (arr == NULL) {
    		printf("Memory allocation failed.\n");
    		return 1;
	}
	printf("Array after calloc: ");
	print_arr(arr,n);

	printf("Enter %d integers: ", n);
        int sum = 0;
        for (int i = 0; i < n; i++){
                scanf("%d", &arr[i]);
                sum+=arr[i];
        }	

	printf("Updated array: ");
	print_arr(arr, n);

	float avg = (float)sum/n;
	printf("Average of the array: %.1f\n", avg);
	
	free(arr);
	arr = NULL;
	
	return 0;
}

void print_arr(int *arr, int n){
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
