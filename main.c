#include <stdio.h>
#include "fees.h"

int main() {
    float test = ParkingFee();
    printf("Give day count. ");
    int dayCount;
    scanf("%d", &dayCount);
    float testMulti = ParkingFeeMultiDays(dayCount);
    printf("test = %.2f", test);
    printf("testMulti = %.2f", testMulti);
}