//
// Created by Phillip on 09.10.2023.
// pass by value or pass by reference
//

#include <stdio.h>

int add(int a, int b);

int main(){
    int x = 2;
    int y = 7;
    printf("x = %i  y=%i\n",x,y);
    printf("&x = %p &y=%p\n",&x,&y);
    int z = add(x,y);
    printf("z = %i\n",z);

    return 0;
}
int add(int a, int b){
    printf(" a = %i  b=%i\n",a,b);
    printf("&a = %p &b=%p\n",&a,&b);

    return a+b;
}