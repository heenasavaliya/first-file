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


    (a > b) ? (a > c) ? (a > d) ? printf("A is maximum "): 

    printf("D is maximum  "):
    
    (c > d) ? printf("C is maximum  ") : printf("D is maximum  "):

    (b > c) ? (b > d) ? printf("B is maximum  ") : printf("D is maximum  "):

    (c > d) ? printf("C is maximum  ") : printf("D is maximum ");




}