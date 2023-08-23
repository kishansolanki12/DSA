#include<stdio.h>
#include<stdlib.h>
#define n 15
int a[n],i,j,k;
int bubbleshort(int a[])
{
    for(i=0;i<n;i++)

    {
        for(j=0;j<n-1;j++)
        {
           if(a[j]>a[j+1])
           {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k; 
           } 
        }
    }
}

int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%15+1;
        printf("%d ",a[i]);
    }
    bubbleshort(a);
    printf("\nsorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    

}