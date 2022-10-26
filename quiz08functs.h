/** quiz08functs.h
* ===========================================================
*    Name:
* Section:
* Purpose: Quiz 8
* ===========================================================
*/

#ifndef QUIZ08FUNCTS_H
#define QUIZ08FUNCTS_H

// YOUR STRUCT GOES HERE
typedef struct Car_struct{
    char manufacturer[10];
    char model[20];
    int year;
    double price;
} Car;

// YOUR FUNCTION DECLARATION GOES HERE
void displayCar(Car car);

// This function is being provided to you.  Do Not Touch!
int loadCarInventory(Car* carInventory, int numToRead);

#endif