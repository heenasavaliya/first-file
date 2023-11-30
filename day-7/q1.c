#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter a value of first number : ");
    scanf("%d",&a);

    printf("Enter a value of second number : ");
    scanf("%d",&b);

    printf("Enter a value of third number : ");
    scanf("%d",&c);

    
    if(a<b){
        if(a<c){
            printf("a is mini %d",a);
        }else{
            printf("c is mini %d",c);
        }
    }else{
        if(b<c){
            printf("b is mini %d",b);
        }else{
            printf("c is mini %d",c);
        }
    }
}