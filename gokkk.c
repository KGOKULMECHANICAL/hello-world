#include <stdio.h>
int main()
{
   long long g;
    int count = 0;
    printf("Enter a numbers: ");
    scanf("%lld", &g);
    while(g != 0)
    {
        g /= 10;
        ++count;
    }
     printf("Number of digits you entered is : %d", count);
}
