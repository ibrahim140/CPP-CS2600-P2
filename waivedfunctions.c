#include <stdio.h>

float parkingFee (float paid, int days) { //Gets the total amount in parking fees, and how many days were used
    return paid-(days*6.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float taxiFee (float paid, int days) { //Gets the total amount in taxi fees, and how many days were used
    return paid-(days*10.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float hotelFee (float paid, int days) { //Gets the total amount in hotel fees, and how many days were used
    return paid-(days*90.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float conferenceFee (float paid, int days) { //Gets the total amount in conference registration fees, and how many days were used
    return paid-(days*0.00); //Employee needs to pay for all of this according to document, leaving it here for consistency
}