//
//  main.c
//  Check for Leap Year
//
//  Created by Deebthik on 10/1/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//


//Program to check whether a given year is a leap year or not

#include <stdio.h>

int year;
char print_str_y[100] = "%d is a leap year.\n";
char print_str_n[100] = "%d is not a leap year.\n";

int main(){
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year%400 == 0)
        printf(print_str_y, year);
    else if (year%100 == 0)
        printf(print_str_n, year);
    else if (year%4 == 0)
        printf(print_str_y, year);
    else
        printf(print_str_n, year);
    
    return 0;
    
}