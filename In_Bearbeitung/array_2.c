//
// Created by Phillip on 09.10.2023.
//

#include <stdio.h>

int main() {
    int myArray[10];

    int zahl = 10;
    for (int c=0;c<10;c++){
        myArray[c]= zahl-c;

        printf("value at index %i = %i\n",c,myArray[c]);
    }
    return 0;
}
