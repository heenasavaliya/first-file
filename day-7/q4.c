#include<stdio.h>
int main(){

    int a,b,c,d;

    printf("Enter a value of first number : ");
    scanf("%d",&a);

    printf("Enter a value of second number : ");
    scanf("%d",&b);

    printf("Enter a value of third number : ");
    scanf("%d",&c);
    
    printf("Enter a value of forth number : ");
    scanf("%d",&d);

   if(a>b){
        if (a>c)
        {
            if (a>d)
            {
                printf("A is Max : %d",a);

            }
            else{
                printf("D is Max : %d",d);
            }
        }
        else{
            if (c>d)
            {
                printf("C is Max : %d",c);
            }
            else
            {
                printf("D is Max : %d",d);
            }
            
            
        }
   }
    else{
        if (b>c)
        {
            if (b>d)
            {
                printf("B is Max : %d",b);
            }
            else{
                printf("D is Max : %d",d);
            }
        }
        else{
            if (c>d)
            {
                printf("C is Max : %d",c);
            }
            else{
                printf("D is Max : %d",d);
            }
        }
        
    }

}