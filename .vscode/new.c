#include<stdio.h>

void primeNo(int num){
    int i=1,d=0,c=0;

    for(i=1;i<=num;i++){
        if(num % i == 0){
            c++;
        }
    }
    if(c==2){
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
}

int main(){
    int a;
    printf("Enter a number :: ");
    scanf("%d",&a);
    primeNo(a);

    return 0;
}


