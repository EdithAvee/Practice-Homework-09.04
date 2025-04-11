#include <stdio.h>

void arr(int arr[], int size, int i){

	if(i >= size){
		return;
	}

	arr(arr, size, i - 1);
	printf("%d", arr[i]);

}	


int main(){

	int size = 0;
	printf("array size= %d ", size);
	scanf("%d", &size);

	int arr[size];

	printf("elements: ");
	for(int i = 0, i < size, i++){
		scanf("%d", &arr[i]);
	}

	printf("res: ");
	arr(arr, size, 0);
        printf("\n");

	return 0;

}	

