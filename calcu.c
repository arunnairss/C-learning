#include <stdio.h>
int main(){
    printf("BASIC CALCULATOR");
    int a,b,r;
    char c;
    printf("\n Please input number 1 and 2 ");
    scanf("%d%d",&a,&b);
    printf("\n Please input the operation you want to perform: ");
    scanf(" %c",&c);
    if(c=='+')
    {
        r=a+b;
        printf("The sum of the numbers is %d",r);
    }
    else if(c=='-')
    {
        r=a-b;
        printf("The differnce of the numbers is %d",r);
    }
    else if(c=='*')
    {
        r=a*b;
        printf("The product of the numbers is %d",r);
    }
    else if(c=='/')
    {
        r=a/b;
        printf("The quotient of the numbers is %d",r);
    }
   
    return 0;
    
}