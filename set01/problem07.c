#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main(){
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input_n(){
    int x;
    printf("Enter the value of n:\n");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n){
    int i,sum;
    for (i=1;i<=n;i++)
    {
         sum=sum+i;      
    }
    return sum;
}
void output(int n, int sum){
    printf("The sum of natural numbers until %d is: %d\n",n,sum);
}