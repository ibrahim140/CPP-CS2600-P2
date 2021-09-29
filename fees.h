#include <stdio.h>

float parkingFeeAvg (float paid, int days) { //Gets the total amount in parking fees, and how many days were used
    return paid-(days*6.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float taxiFeeAvg (float paid, int days) { //Gets the total amount in taxi fees, and how many days were used
    return paid-(days*10.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float hotelFeeAvg (float paid, int days) { //Gets the total amount in hotel fees, and how many days were used
    return paid-(days*90.00); //returns what employee needs to pay, subtracted by the daily waived amount for each day
}
float conferenceFeeAvg (float paid, int days) { //Gets the total amount in conference registration fees, and how many days were used
    return paid-(days*0.00); //Employee needs to pay for all of this according to document, leaving it here for consistency
}
float parkingFeeTrue (float paid) { //Gets the parking fee paid on that day
    if (paid <= 6.00) return 0;
    else return paid-6.00;
}

float taxiFeeTrue (float paid) { //Gets the taxi fee paid on that day
    if (paid <= 10.00) return 0;
    else return paid-10.00;
}

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