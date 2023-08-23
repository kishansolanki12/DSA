#include<stdio.h>
#include<stdlib.h>
#define n 15
int a[n],i,j,k;
int selection(int a[])
{
    for(i=0;i<n;i++)

    {
        for(j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
           {
                k=a[i];
                a[i]=a[j];
                a[j]=k; 
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
    selection(a);
    printf("\nsorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    

}