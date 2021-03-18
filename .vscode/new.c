#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
system("cls");
FILE *fptr;  //file pointer create
char txt[50];
int i=0;
printf("Enter a string :: ");
gets(txt);
fptr = fopen("copy1.txt","w");
fputs(txt,fptr);
fclose(fptr);

fptr = fopen("copy1.txt","r");

fgets(txt,50,fptr);
printf("Printing file content in reverse order.....\n");
i = strlen(txt);
while(i >= 0){
    printf("%c",txt[i]);
     i--; 
}
fclose(fptr);
getch();

    return 0;
}