/*
These functions are used to get the allowed reimbursal amount from the company
for certain types of fees that will be calculated each day of the trip.
*/


/*
 *  This function calculates the amount covered by the company for parking fees.
 *
 *  Parameters: parkingFee is the parking fee that is input for that day
 *  Returns: Returns the covered parking fee as a float
 */
float allowedParkingFee(float parkingFee){
    if(parkingFee < 6.0){   // if parking fee is below $6, company will allow reimbursal of the full amount
        return parkingFee;
    } else {
        return 6.0;     // When parking fee is more, the company only covers up to $6 for a given day
    }
}


/*
 *  This function calculates the amount covered by the company for taxi fees.
 *
 *  Parameters: taxiFee is the taxi fee that is input for that day
 *  Returns: Returns the covered taxi fee as a float
 */
float allowedTaxiFee(float taxiFee){
    if(taxiFee < 10.0){ // if taxi fee is below $10, company will allow reimbursal of the full amount
        return taxiFee;
    } else {
        return 10.0;    // When the taxi fee is more, the company only covers up to $10 for a given day

    }
}


/*
 *  This function calculates the amount covered by the company for Hotel expenses.
 *
 *  Parameters: hotelExpense is the hotel cost that is input for that day
 *  Returns: Returns the covered hotel expense as a float
 */
float allowedHotelExpenses(float hotelExpense){
    if(hotelExpense < 90.0){    // if hotel fee is below $90, company will allow reimbursal of the full amount
        return hotelExpense;
    } else {
        return 90.0;    // When the hotel fee is more, the company only covers up to $90 for a given day
    }
}

