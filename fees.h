#include <stdio.h>

float hotelFeeTrue (float paid) { //Gets the hotel fee paid on that night
    if (paid <= 90.00) return 0;
    else return paid-90.00;
}

float parkingFeeTrue (float paid) { //Gets the parking fee paid on that day
    if (paid <= 6.00) return 0;
    else return paid-6.00;
}

float conferenceFeeTrue (float paid) { //Gets the conference registration fee
    return paid; //Employee needs to pay for all of this according to document, leaving it here for consistency
}

float TaxiFee () {
    float fee;
    do
    {
        printf("\nHow much was paid in taxi fees this day? ");
        scanf("%f", fee);
        if (fee < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
    } while (fee >= 0);
    /*fee -= 10;
    if (fee <= 0)
        printf("\nFee fully covered by employer! %f saved.\n", fee*-1); //this value is made positive for the user, but returned negative. It represents the amount saved from the employer covered the cost.
    else
        printf("\nFee partially covered by employer, cost is %f.\n", fee);*/
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float TaxiFeeMultiDays (int days) {
    float fee = 0, day;
    for (int i = 0; i < days; i++) {
        do
        {
            printf("\nHow much was paid in taxi fees on day %d? ", i+1);
            scanf("%f", day);
            if (day < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
        } while (day >= 0);
        fee += day;
    }
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float HotelFee () {
    float fee;
    do
    {
        printf("\nHow much was paid in hotel fees this day? ");
        scanf("%f", fee);
        if (fee < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
    } while (fee >= 0);
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float HotelFeeMultiDays (int days) {
    float fee = 0, day;
    for (int i = 0; i < days; i++) {
        do
        {
            printf("\nHow much was paid in hotel fees on day %d? ", i+1);
            scanf("%f", day);
            if (day < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
        } while (day >= 0);
        fee += day;
    }
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float ParkingFee () {
    float fee;
    do
    {
        printf("\nHow much was paid in parking fees this day? ");
        scanf("%f", fee);
        if (fee < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
    } while (fee >= 0);
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float ParkingFeeMultiDays (int days) {
    float fee = 0, day;
    for (int i = 0; i < days; i++) {
        do
        {
            printf("\nHow much was paid in parking fees on day %d? ", i+1);
            scanf("%f", day);
            if (day < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
        } while (day >= 0);
        fee += day;
    }
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float ConferenceFee () {
    float fee;
    do
    {
        printf("\nHow much was paid in conference fees this day? ");
        scanf("%f", fee);
        if (fee < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
    } while (fee >= 0);
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}

float ConferenceFeeMultiDays (int days) {
    float fee = 0, day;
    for (int i = 0; i < days; i++) {
        do
        {
            printf("\nHow much was paid in conference fees on day %d? ", i+1);
            scanf("%f", day);
            if (day < 0) printf("\nInvalid input! fee should be from 0 to infinity (though hopefully not that far).");
        } while (day >= 0);
        fee += day;
    }
    return fee; //If this is negative, main should save the value to a "Fee covered" variable. If it's positive, save 10 to that variable. In any case, increase the "fee total" variable by it + 10.
}