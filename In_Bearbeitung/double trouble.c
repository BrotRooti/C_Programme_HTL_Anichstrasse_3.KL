//
// Created by Phillip on 09.10.2023.
//

#include <stdio.h>


void times_two(int* wert);

int main() {
    int x = 2;
    printf("x = %i\n",x);
    times_two(&x);
    printf("x = %i\n",x);
}

void times_two(int* wert){
    *wert = *wert *2;
}