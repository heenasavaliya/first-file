#include<stdio.h>
int main(){
    
int a,b;

printf("Enter a value of first number : ");
scanf("%d",&a);

printf("Enter a value of second number : ");
scanf("%d",&b);


    if(a > b) {
        printf("The minimum value : %d", a);
    } else{
        printf("the minimum value : %d", b);

    }
}

