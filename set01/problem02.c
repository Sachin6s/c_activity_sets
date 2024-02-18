//2. Write a C program to add two numbers.
#include <stdio.h>
int main () {
    int a,b,sum;
    
    printf("Enter the first and second number\n");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("The sum of %d and %d is %d/n",a,b,sum);
    return 0;
}