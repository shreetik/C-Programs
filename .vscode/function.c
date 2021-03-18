#include<stdio.h>

void series(int num)(
    i=1,j,result;
    for(j=1;j<num;j++){
       result /= (j+i);
    }
   printf("%d",result);
)

int main(){
    int n;
    printf("Enter a number :: ");
    scanf("%d",&n);

}