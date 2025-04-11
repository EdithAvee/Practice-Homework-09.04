#include <stdio.h>

void  mul(int n){

		if(n < 0){
                   return;
        }

	    printf("%d\n", n);
            mul(n - 1);	    
}		


int main(){
	int n = 0;
	printf("n=%d", n);
	scanf("%d", &n);

	mul(n);
    return 0;
}



