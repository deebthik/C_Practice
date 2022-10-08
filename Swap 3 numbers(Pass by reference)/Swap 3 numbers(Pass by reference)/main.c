//
//  main.c
//  Swap 3 numbers(Pass by reference)
//
//  Created by Deebthik on 11/12/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//

#include <stdio.h>

int x, y, z;

int main() {
    
    int temp_sum;
    
    printf("Enter the values for x, y and z(v1, v2, v3): ");
    scanf("%d, %d, %d", &x, &y, &z);
    
    temp_sum = Swapping_Three_Numbers(&x, &y, &z);
    z = temp_sum-x-y;
    y = temp_sum-z-x;
    
    printf("The values of x,y,z after swapping\n");
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    
    
    return 0;
}

int Swapping_Three_Numbers(int *a, int *b, int *c){
    
    *a = *a + *b + *c;
    *b = *a - *b - *c;
    *c = *a - *b - *c;
    *a = *a - *b - *c;
    
    return *a + *b + *c;
    
}
