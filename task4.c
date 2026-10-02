#include <stdio.h>
#include <stdlib.h>

int main(){

	char **arr;
	arr = malloc(3*sizeof(char *));

	if (arr == NULL) {
 		printf("Memory allocation failed\n");
    		return 1;
	}

	// allocate memory for eahc string, up to 50 characters each
	for (int i = 0; i < 3; i++){
		arr[i] = malloc(51*sizeof(char));
		if (arr[i] == NULL) {
        		printf("Memory allocation failed\n");
        		return 1;
    		}
	}
	
	printf("Enter 3 strings: ");
	for (int i = 0; i < 3; i++){
		scanf("%50s", arr[i]); // arr[i] is already a pointer
	}
	printf("Entered 3 strings: ");
	for (int i = 0; i < 3; i++){
		printf("%s ", arr[i]);
	}

	char **new_arr = realloc(arr, 5*sizeof(char *));
	
	if (new_arr == NULL) {
		printf("Memory reallocation failed!\n");
		free(arr);
		return 1;
	}

	for (int i = 3; i < 5; i++){
		new_arr[i] = malloc(51 * sizeof(char));
		if (new_arr[i] == NULL) {
                        printf("Memory allocation failed\n");
                        return 1;
                }
	}

	printf("\nEnter 2 more strings: ");
	for (int i = 3; i < 5; i++){
                scanf("%50s", new_arr[i]);
        }
	printf("All strings: ");
	for (int i = 0; i < 5; i++){
                printf("%s ", new_arr[i]);
        }
	printf("\n");

	for (int i = 0; i < 5; i++) {
		free(new_arr[i]);
	}

	free(new_arr);
	new_arr = NULL;

	return 0;
}
