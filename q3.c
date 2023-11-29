#include<stdio.h>
int main(){

 int a;
 
 
printf("Enter a any number : ");
scanf("%d",&a);

if(a<0){
    printf("a number is negative");
}else if(a==0){
    printf("a number is neutral");
}else{
    printf("a number is positive");
}


}