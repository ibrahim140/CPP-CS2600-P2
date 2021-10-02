#include <stdio.h>

float TaxiFee () {
    float fee;
    printf("\nHow much was paid in taxi fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
        printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
        printf("\nHow much was paid in taxi fees this day? ");
        scanf("%f", &fee);
    }
    return fee; 
}

float TaxiFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in taxi fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in taxi fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float HotelFee () {
    float fee;
    printf("\nHow much was paid in hotel fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in hotel fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float HotelFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in hotel fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in hotel fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float ParkingFee () {
    float fee;
    printf("\nHow much was paid in parking fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in parking fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float ParkingFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in parking fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in parking fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float ConferenceFee () {
    float fee;
    printf("\nHow much was paid in conference fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in conference fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float ConferenceFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in conference fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in conference fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}