//
//  main.c
//  Temperature Conversion(Pass by reference)
//
//  Created by Deebthik on 11/12/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//

//Program to convert a temperature in degree Celsius to degree Fahrenheit and vice-versa(pass by reference)

#include <stdio.h>

float c, f;

float C_F(float *n);
float F_C(float *n);

int main()
{
    printf("CELSIUS-FAHRENHEIT\n");
    printf("Enter temperature in degree Celsius: ");
    scanf("%f", &c);
    f = C_F(&c);
    printf("The converted temperature in degree Fahrenheit is %f\n\n", f);
    
    printf("FAHRENHEIT-CELSIUS\n");
    printf("Enter temperature in degree Fahrenheit: ");
    scanf("%f", &f);
    c = F_C(&f);
    printf("The converted temperature in degree Celsius is %f\n", c);
    
    return 0;
    
}

float C_F(float *n){
    
    return (*n*(9.0/5)) + 32;
    
}

float F_C(float *n){
    
    return (*n-32)*(5.0/9);
    
}
