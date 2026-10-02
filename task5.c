#include <stdio.h>
#include <stdlib.h>

int main(){

	int std_num;
	printf("Enter the number of students: ");
	scanf("%d", &std_num);
	
	int *arr;
	arr = (int *) malloc(std_num*sizeof(int));
	if (arr == NULL) {
        	printf("Memory allocation failed!\n");
        	return 1;
    	}

	printf("Enter the grades: ");
	scanf("%d", &arr[0]);
	int min = arr[0], max = arr[0];
	for(int i = 1; i < std_num; i++){
		scanf("%d", &arr[i]);
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}

	printf("Highest grade: %d\n", max);
	printf("Lowest grade: %d\n", min);

	free(arr);
	arr = NULL;


	return 0;
}
