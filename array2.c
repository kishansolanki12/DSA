#include <stdio.h>
int main() 
{
    int a[5];
    printf("Enter a number: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }

    int k = a[0]; 
    for (int i = 0; i < 4; i++) 
    {
        a[i] = a[i + 1]; 
    }
    a[4] = k; 

    printf("ans : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
