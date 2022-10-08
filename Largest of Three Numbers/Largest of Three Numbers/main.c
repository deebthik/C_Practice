//
//  main.c
//  Largest of Three Numbers
//
//  Created by Deebthik on 10/1/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//


//Program to find the largest of three given numbers

#include <stdio.h>

double n1, n2, n3;
char statement[100] = "%.2lf is the largest number.\n";

int main()
{
    
    printf("Enter three numbers (n1, n2, n3): ");
    scanf("%lf, %lf, %lf", &n1, &n2, &n3);
    
    if( n1>=n2 && n1>=n3)
        printf(statement, n1);
    
    else if (n2>=n1 && n2>=n3)
        printf(statement, n2);
    
    else
        printf(statement, n3);
    
    return 0;
}