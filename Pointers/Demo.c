#include<stdio.h>
int main(){
    int a = 10;
    printf("Address of a using address operator: %d\n", &a);
    printf("Hexa Address of a using address operator: %p\n", &a);
    printf("Base Address of a using address operator: %x\n", &a);
    int * ptr = &a;
    printf("Hexa Address of a using pointer: %p\n", ptr);
    printf("Base Address of a using pointer: %x\n", ptr);
    // Getting value using pointer: de-referencing 
    printf("Value of a using pointer: %d\n", *ptr);
    int ** dptr = &ptr;
    printf("Hexa Address of pointer using address operator: %x\n", &ptr);
    printf("Hexa Address of pointer using double pointer: %x\n", dptr);
    printf("Value of a using dptr: %d\n", **dptr);
    printf("%d", *(&a));
    return 0;
}