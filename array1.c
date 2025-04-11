#include <stdio.h>

void array(int arr[], int size, int i){
        
	if(i >= size){
		return;
	}

	printf("%d", arr[i]);
        array(arr, size, i + 1);

}	

int main(){
	
    int size = 0;
    printf("array size: ");
    scanf("%d", &size);
        
    int arr[size];

    printf("arr elements: %d\n", size);

    for(int i = 0; i < size; i++){

		scanf("%d", &arr[i]);
    }	
    
    printf("result:\n");    
    array(arr, size, 0);
    printf("\n"); 

    return 0;

}	
