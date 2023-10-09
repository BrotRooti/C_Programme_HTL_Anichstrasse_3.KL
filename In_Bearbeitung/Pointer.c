//
// Created by Phillip on 09.10.2023.
// Pointer
//

#include <stdio.h>


int main(){
    int x = 2147483648;
    int y = 1;
    int z = x+y;
    printf("x = %i\n",z);
    printf("size of int = %li\n",sizeof(x));

    printf("address of x = %p\n",&x);
    printf("address of y = %p\n",&y);

    int * pointy = &x;
    printf("pointy's value = %p\n",pointy);
    printf("the value of x = %i\n",*pointy);
}