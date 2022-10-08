//
//  main.c
//  Roots of a Quadratic Equation
//
//  Created by Deebthik on 10/1/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//


//Program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main(){
    
    double a, b, c, det, root1, root2, realPart, imaginaryPart;
    
    printf("Enter coefficients a, b and c (c1, c2, c3): ");
    scanf("%lf, %lf, %lf", &a, &b, &c);
    
    det = (b*b)-(4*a*c);
    
    if (det > 0){
        
        root1 = (-b+sqrt(det))/(2*a);
        root2 = (-b-sqrt(det))/(2*a);
        
        printf("Root1 = %.3lf\nRoot2 = %.3lf\n",root1 , root2);
    }
    
    else if (det == 0){
        
        root1 = root2 = -b/(2*a);
        
        printf("Root1 = Root2 = %.3lf", root1);
    }
    
    else{
        
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-det)/(2*a);
        printf("Root 1 = %.3lf+%.3lfi\nRoot 2 = %.3lf-%.3lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    
    return 0;
}
