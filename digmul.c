#include <stdio.h>

int dig(int n){

    if(n == 0){
        return 0;
    }

	if(n > 0 && n < 10){
        return n;	
	}

  return dig(n % 10) * dig(n / 10);

}

int main(){
		int n = 0;
		printf("n=%d", n);
		scanf("%d", &n);

		printf("res:%d\n", dig(n));
		return 0;

}
