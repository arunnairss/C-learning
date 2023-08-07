#include <stdio.h>
int sum(int a,int b)
{
  return a+b;
}
int diff(int a,int b)
{
  return a-b;
}
int prod(int a,int b)
{
  return a*b;
}
int quo(int a,int b)
{
  return a/b;
}
int main()
{
  int a,b,r;
  char c;
  printf("Please enter the the numbers 1 and 2:");
  scanf("%d%d",&a,&b);
  printf("Please enter the operator");
  scanf(" %c",&c);
  if(c=='+')
  {printf("The sum is %d",sum(a,b),r);}
  else if(c=='-')
  {printf("The differnce is %d",diff(a,b),r);}
  else if(c=='*')
  {printf("The product is %d",prod(a,b),r);}
  else if(c=='/')
  {printf("The quotient is %d",quo(a,b),r);}
  else{printf("Invalid operator:please choose again");}
  return 0;
}