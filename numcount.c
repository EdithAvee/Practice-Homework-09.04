#include <stdio.h>

void num(int n){

         if(n < 0){
	    return;
	 }	


    num(n - 1);
    printf("%d\n", n);

} 

int main(){
	int n = 0;
	printf("n=%d", n);
	scanf("%d", &n);

    num(n);
    return 0;

}    

   	 
