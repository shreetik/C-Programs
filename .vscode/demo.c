
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *fp;
  char name[100]="Shreetik";
  int c = 18;
  fp = fopen("Score.txt","w");
   fprintf(fp,"\t\t\t\t\t         Highest Score\n\t\t\t\t\t---------------------------------\n\t\t\t\t\t     Name      |       Score\n\t\t\t\t\t---------------------------------\n\t\t\t\t\t  %s               %d",name,c);
   fclose(fp);
fp = fopen("Score.txt","r");
        do{
         c = getc(fp);
         printf("%c",c);
          }while(c!=EOF);
        fclose(fp);






}
