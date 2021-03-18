#include"stdio.h"
#include"stdlib.h"
void main()
{
int a,b;
int choice;
char option;
do
{
printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
printf("Enter your Choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:{
        printf("Enter the values of a&b :");
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
        break;
       }
case 2:{
        printf("Enter the values of a&b :");
        scanf("%d%d",&a,&b);
        printf("%d\n",a-b);
        break;
       }
case 3:{
        printf("Enter the values of a&b :");
        scanf("%d%d",&a,&b);
        printf("%d\n",a*b);
        break;
       }
case 4:{
        printf("Enter the values of a&b :");
        scanf("%d%d",&a,&b);
        if(b!=0)
        printf("%d\n",a/b);
        else
        printf("Error\n");
        break;
       }
case 5:{
        exit;
        break;
       }
default :
        printf("Sorry , this is not a valid Choice\n");
}

printf("Sir,Do you want to continue enter (y/n) :: ");
scanf(" %c",&option);
}while(option == 'y');


}