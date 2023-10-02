//
// reference: https://www.tutorialspoint.com/c_standard_library/c_function_localtime.html
// Created by Phillip on 01.10.2023.
//
#include <stdio.h>
#include <time.h>

int iYear;
int iMonth;
int iDay;
int iHour;
int iMinute;
int iSecond;







int main(){
    printf("Welcome to the age calculator\n");
    printf("Please enter your birthday in the following format: DD.MM.YYYY\n");

    scanf("%i.%i.%i",&iDay,&iMonth,&iYear);
    printf("Please enter your birthtime in the following format: HH:MM:SS\n");
    scanf("%i:%i:%i",&iHour,&iMinute,&iSecond);

    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int iCurrentDay = local->tm_mday;

    int iCurrentYear = local->tm_year+1900;
    int iCurrentMonth = local->tm_mon+1;
    int iCurrentHour = local->tm_hour;
    int iCurrentMinute = local->tm_min;
    int iCurrentSecond = local->tm_sec;

    int iAgeYear = iCurrentYear-iYear;
    int iAgeMonth = iCurrentMonth-iMonth;
    int iAgeDay = iCurrentDay-iDay;
    int iAgeHour = iCurrentHour-iHour;
    int iAgeMinute = iCurrentMinute-iMinute;
    int iAgeSecond = iCurrentSecond-iSecond;


    if (iAgeSecond<0){
        iAgeMinute--;
        iAgeSecond+=60;
    }
    if (iAgeMinute<0){
        iAgeHour--;
        iAgeMinute+=60;
    }
    if (iAgeHour<0){
        iAgeDay--;
        iAgeHour+=24;
    }
    if (iAgeDay<0){
        iAgeMonth--;
        iAgeDay+=30;
    }
    if (iAgeMonth<0){
        iAgeYear--;
        iAgeMonth+=12;
    }

    printf("You are %i years, %i months, %i days, %i hours, %i minutes and %i seconds old\n",
           iAgeYear,iAgeMonth,iAgeDay,iAgeHour,iAgeMinute,iAgeSecond);

}