#include <stdio.h>

typedef struct car{

	int year;
	float price;
	char brand[20];
	char model[20];
} car;

int main(){
	car cars[3];

for (int i = 0; i < 3; i++){
     printf("Car %d details: \n", i+1);
     printf("brand: ");
     scanf("%s", cars[i].brand);

     printf("model: ");
     scanf("%s", cars[i].model);

     printf("year: ");
     scanf("%d", &cars[i].year);

     printf("price: ");
     scanf("%f", &cars[i].price);

}    
   
     printf("\n");


printf("CARS: \n");
for(int i = 0 ; i < 3; i++){
	printf("Car %d\n", i+1);
	printf("Brand: %s\n", cars[i].brand);
	printf("Model: %s\n", cars[i].model);
	printf("Year: %d\n", cars[i].year);
	printf("Price: %f\n", cars[i].price);
        printf("\n");	

}	


return 0;

}
          

