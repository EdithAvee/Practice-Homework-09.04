#include <stdio.h>

typedef struct findcar{

	int year;
	float price;
	char brand[20];
	char model[20];


} findcar;

int lowprice(findcar car[], int size){
	int k = 0;
	for(int i = 1; i < size; i++){
		if(car[i].price < car[k].price){
			k = i;
		}
        }

return k;
}


int newest(findcar car[], int size){
	int n = 0;
	for(int i = 1; i < size; i++){
		if(car[i].year > car[n].year){
			n = i;
		}
	}
return n;

}

    void Cartype(findcar car) {
    printf("%s:car.brand %s, car.model %s, car.year %d, car.price %2f\n");

}




int main() {
    findcar cars[3];

    for(int i = 0; i < 3; i++){
        printf("Car %d details: \n", i + 1);
        
        printf("Brand: ");
        scanf("%s", cars[i].brand);

        printf("Model: ");
        scanf("%s", cars[i].model);

        printf("Year: ");
        scanf("%d", &cars[i].year);

        printf("Price: ");
        scanf("%f", &cars[i].price);

        printf("\n");
    }

    int new = newest(cars, 3);
    int low = lowest(cars, 3);

    printf("Ceapest: \n ", low);
    printf("Newest:  \n", new);



    return 0;
}

