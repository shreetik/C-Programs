#include<stdio.h>

int main(){
int i=0,j=0,c=0,k=0;
char arr[30],store[30];

printf("Enter a string :: ");
fgets(arr,30,stdin);
printf("\nwords ending with letter 's' :: ");
while(arr[i] != '\0'){
    if(arr[i] == ' '){
        c = i;
        if(arr[i-1] == 's'){
            
         for(;k<c;k++){
             printf("%c",arr[k]);
         }
         k=c;
        }
    }
    i++;
}

if(arr[i]=='\0'){
    if(arr[i-2]=='s'){
        i=c;
        while(arr[i] != '\0'){
            printf("%c",arr[i]);
            i++;
        }
    }
    else{
        printf("\nhere no words ending with letter 's'");
    }
   
}

    return 0;
}