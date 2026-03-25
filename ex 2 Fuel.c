//ALINDA ATUNGA ALPHA
//25/U/BIE/01354/PE
#include <stdio.h>
int main(){
    float distanceTravelled, fuelUsed, fuelEfficiency;
    // a) ask for user input
    printf("Enter distanceTravelled in kilometers:");
    scanf("%f", &distanceTravelled);
    //displaying the fuel used in liters
    printf("Enter fuelUsed in liters:");
    scanf("%f", &fuelUsed);

    // b) perform some calculations
    fuelEfficiency = distanceTravelled / fuelUsed;

    //C) display the results
    printf("\n The fuelEfficiency is :%.2f km/L\n", fuelEfficiency);

    return 0;

}
