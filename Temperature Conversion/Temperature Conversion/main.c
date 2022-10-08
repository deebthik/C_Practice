//
//  Temperature Conversion.c
//  C1
//
//  Created by Deebthik on 9/4/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//



//Program to convert a temperature in degree Celsius to degree Fahrenheit and vice-versa

#include <stdio.h>

float c, f;

int main()
{
    printf("CELSIUS-FAHRENHEIT\n");
    printf("Enter temperature in degree Celsius: ");
    scanf("%f", &c);
    f = (c*(9.0/5)) + 32;
    printf("The converted temperature in degree Fahrenheit is %f\n\n", f);
    
    printf("FAHRENHEIT-CELSIUS\n");
    printf("Enter temperature in degree Fahrenheit: ");
    scanf("%f", &f);
    c = (f-32)*(5.0/9);
    printf("The converted temperature in degree Celsius is %f\n", c);
    
    return 0;
    
}

/*

 Algorithm
 
 1. START
 2. Declare variables for C and F.
 3. Read temperature in C.
 4. Convert the temperature to F and print it.
 
 5. Read temperature in F.
 6. Convert the temperature to C and print it.
 7. STOP

*/