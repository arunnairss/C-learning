#include <stdio.h>
int main(){
    char un,f,ce,a;
    float t;
    printf("This is a Temperature unit convertor");
    printf("\n Please input the source unit");
    printf("\n type 'F' if farenheit and 'C' if celsius");
    scanf("%c",&un);
    printf("Please input the tempertaure");
    scanf("%f",&t);
    if(un=='F')
    {
        t=(t-32)*0.55;
        printf("\n%f",t);
    }
    else if(un=='C')
    {
        t=(t*9/5)+32;
        printf("\n%f",t);
    }
    else{
        printf("invalid letter,please try again");
    }
return 0;
}