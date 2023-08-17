#include<stdio.h>
int main()
{
    int a = 12;
    printf("a: %d,a: %d",a,a++);
    printf("\na: %d,a: %d",a,++a);
    printf("\na: %d,a: %d",++a,a++);
    printf("\na: %d,a: %d,a: %d",a,a++,a++);
    printf("\na: %d,a: %d,a: %d",a,a++,++a);
    printf("\na: %d,a: %d,a: %d",a,++a,++a);
    printf("\na: %d,a: %d,a: %d",a++,a++,++a);
    printf("\na: %d,a: %d,a: %d",a++,a++,++a);
    printf("\na: %d,a: %d,a: %d",a++,++a,++a);
    printf("\na: %d,a: %d,a: %d,a: %d",a,a++,++a,++a);
}