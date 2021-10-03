#include <stdio.h>
#include "fees.h"
/*
Example of ParkingFee() in use, to save to variable givenFee for math later.
*/
int main() {
    /*float test = ParkingFee();
    printf("Give day count. ");
    //int dayCount;
    //scanf("%d", &dayCount);
    float testMulti = ParkingFeeMultiDays(dayCount);
    printf("test = %.2f", test);
    printf("\ntestMulti = %.2f", testMulti);*/
    
    printf("Give day count. ");
    int dayCount;
    float totalFee = 0, feeWaived, givenFee;
    scanf("%d", &dayCount);
    for (int day = 0; day < dayCount; day++) {
        printf("Day %d", day+1);
        givenFee = ParkingFee();
        totalFee += givenFee;
        if (10-givenFee > 0) feeWaived = 10 - givenFee;
        else feeWaived = 10;

    }
    float roundTrip;
    scanf("%f", &roundTrip);
    
    
    return 0;
}