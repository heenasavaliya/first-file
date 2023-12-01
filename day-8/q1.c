#include<stdio.h>
int main(){

    int a,b,c,d;

    printf("Enter a first value : ");
    scanf("%d",&a);
    
    printf("Enter a second value : ");
    scanf("%d",&b);

    printf("Enter a third value : ");
    scanf("%d",&c);

    printf("Enter a forth value : ");
    scanf("%d",&d);


    (a < b) ? (a < c) ? (a < d) ? printf("A is minimum  "): 

    printf("D is minimum  "):
    
    (c < d) ? printf("C is minimum  ") : printf("D is minimum "):

    (b < c) ? (b < d) ? printf("B is minimum  ") : printf("D is minimum  "):

    (c < d) ? printf("C is minimum  ") : printf("D is minimum  ");




}