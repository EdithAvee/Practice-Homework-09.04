#include <stdio.h>
int fib(int a){
             
	if(a < 0){

		printf("err:%d\n", a);
			
	}

	if(a >= 0 && a < 2){
			return a;
	}
 
	return fib(a - 1) + fib(a - 2);
	
}

int main(){
		int a = 0;
		printf("n= %d",a);
		scanf("%d", &a);


	printf("res:%d\n", fib(a) );

	return 0;
}
