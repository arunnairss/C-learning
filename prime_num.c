#include <stdio.h>
int main()
{
    int i,a,b;
    printf("\n This program checks whether a given number is a prime or not");
    printf("\nPlease input the number you want to check.");
    scanf(" %d",&a);
    for(i=2;i<=a-1;i++)
    {
        b=a%i;
        if(b==0)
        {
            printf("\nThe number is not a prime");
            break;
        }
        else 
        {
            printf("\nThe number is prime");
            break;
        }
        
       

    }

return 0;
}
