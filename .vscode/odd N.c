#include<stdio.h>

int main(){
    int i=1, num,sum;

    printf("Enter a number :: ");
    scanf("%d",&num);

    do{
        if(num % 2 != 0){
         printf("%d",num);
        }
    }while(i<=num)


}