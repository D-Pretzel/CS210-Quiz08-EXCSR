/** quiz08.c
* ===========================================================
*    Name:
* Section:
* Purpose: Quiz 8
* ===========================================================
*/

#include <stdlib.h>
#include <stdio.h>
#include "quiz08functs.h"

int main(void){

    int numCars = 0;

    printf("How many cars in the inventory? ");
    scanf("%d", &numCars);

    // Part 3:  Dynamically Create Your Array Here
    Car* carInventory = (Car*)malloc(numCars * sizeof(Car));

    // Part 3:  Uncomment this line when you are told to do so in the instructions
    int numCarsLoaded = loadCarInventory(carInventory, numCars);


    // Part 4:  YOUR CODE GOES HERE
    displayCar(carInventory[0]);
    displayCar(carInventory[numCarsLoaded - 1]);

    free(carInventory);

    return 0;

}