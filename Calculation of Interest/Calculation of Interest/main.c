//
//  main.c
//  Calculation of Interest
//
//  Created by Deebthik on 9/5/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//



//Program to calculate simple interest and compound interest

#include <stdio.h>
#include <math.h>

float p, r, t, si;
double a;
int n;

int main()
{
    printf("SIMPLE INTEREST\n");
    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    
    printf("Enter rate: ");
    scanf("%f", &r);
    
    printf("Enter time period(years): ");
    scanf("%f", &t);
    
    si = (p*r*t)/100;
    printf("The simple interest for the given data is %f\n\n", si);
    
    
    printf("COMPOUND INTEREST\n");
    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    
    printf("Enter rate: ");
    scanf("%f", &r);
    
    printf("Enter time period(years): ");
    scanf("%f", &t);
    
    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%d", &n);
    
    a = p*pow((1+(r/(100*n))), n*t);
    printf("The accrued amount is %lf\n", a);
    
    return 0;
}

/*
 
 Algorithm
 
 1. START
 2. Declare variables for P, R, t and SI.
 3. Declare additional variables for n and A(for compound interest).
 4. Read principal amount.
 5. Read rate.
 6. Read time period(in years)
 7. Calculate SI using the formula and print it.
 
 8. Repeat steps 4 through 6.
 9. Read n.
 10. Calculate accrued amount(a) using the formula and print it.
 11. STOP
 
*/
