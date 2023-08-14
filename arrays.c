#include <stdio.h>
int main(){
    int a[6]={0,1,2,3,4,5}; //This means we store 6 values under one variable. Each one of these values has a index starting from 0// 
    //We can also declare arrays without specifing it's size. In that case we'd simply write int a[]={0,1,2,3,4,5};
    //Now we'll print the value stored at the 3rd index which is '3'
    printf("%d",a[3]);
    //we can also update the value of any index in anm an array like this:
    a[3]=6;
    //Now to print all the elements of an array,we'll traverse it like this:
    printf("The elements of array a are:");
    for (int i=0;i<6;i++){
    printf("\n%d",a[i]);}
    //multidimensional arrays in c:
    //We'll start with 2-D arrays
    int b[3][4]={{2,4,6,8},{10,12,14,16},{18,20,22,24}}; // here we have created a 2-D array with 3 row and 4 columns.
    //now we'll access this array using a simple for loop:
    printf("Demonstration of 2-D array:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //now we'll try a 3-D array
    int c[2][3][3]={{1,2,3,4,5,6,7,8,9},{2,4,6,8,10,12,14,16,18}};
    //this has created 2 3x3 arrays.Now we'll access them similar to how we accesed the 2-D array.
    printf("Demonstration of 3-D array:\n");
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            printf("%d ",c[i][j][k]);
        }
        printf("\n");
    }
    printf("\n \n");
   }
   return 0;
}
