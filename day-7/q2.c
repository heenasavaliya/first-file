#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter a value of first number : ");
    scanf("%d",&a);

    printf("Enter a value of second number : ");
    scanf("%d",&b);

    printf("Enter a value of third number : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("a is max %d",a);
        }else{
            printf("c is max %d",c);
        }
    }else{
        if(b>c){
            printf("b is max %d",b);
        }else{
            printf("c is max %d",c);
        }
    }
}