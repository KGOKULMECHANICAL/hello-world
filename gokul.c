#include<stdio.h>
int main()
{
    int a,b,g[100],i,y=0;
    printf("enter the value for a :");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter an array:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&g[i]);
    }
    for(i=0;i<b;i++)
    {
        y+=g[i];
    }
    printf("%d",y);
        return 0;
}
