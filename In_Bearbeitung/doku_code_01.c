//
// Created by Phillip on 02.10.2023.
//
#include <stdio.h>
    int main(void){
    int x = 42;
    printf("Wir erstellen eine Variable: int x = 42;\n");
    printf("Die Adresse von x ist &x und hat den Wert %p \n", &x);
    printf("Der Wert von x ist %d \n",x);
    printf("\n");
    int *p = &x;
    printf("Nun erstellen wir eine Zeiger-Variable: int *p = &x;\n");
    printf("Die Adresse von p ist &p und hat den Wert %p \n", &p);
    printf("Der Wert von p ist %p \n",p);
    printf("Der Wert auf den p zeigt ist *p und ist %d \n",*p);
    return 0;

    }
