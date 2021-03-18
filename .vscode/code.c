#include<stdio.h>
struct library{
    int acc_no;
    char author_name[30];
    char book_title[30];
    int flag;
}li1,li2,li3;




int main(){
int c=0,x;
char auth[20],a1[20],a2[20];

printf("Input book information\n");
printf("----------------------\n");

printf("Enter book title :: ");
gets(li1.book_title);

printf("Enter name of author :: ");
gets(li1.author_name);

printf("enter accession number :: ");
scanf("%d",&li1.acc_no);

printf("enter book issued or not by 1 or 0 :: ");
scanf("%d",&li1.flag);

printf("Do you want to insert another book information : for yes input '1' and for no input '0' :: ");
scanf("%d",&x);
if(x == 1){
  c++;
printf("\nInput book information\n");
printf("----------------------\n\n");

printf("Enter book title :: ");
scanf("%s",li2.book_title);

printf("Enter name of author :: ");
scanf("%s",li2.author_name);

printf("enter accession number :: ");
scanf("%d",&li2.acc_no);

printf("enter book issued or not by 1 or 0 :: ");
scanf("%d",&li2.flag);

}

printf("---------------------------------------------------------------\n\n");


printf("book information\n");
printf("----------------------\n\n");

printf("Book title :: %s \n",li1.book_title);
printf("Author name :: %s \n",li1.author_name);
printf("Accession number :: %d \n",li1.acc_no);

if(li1.flag == 1){
  printf("Book is not issued");
}
else{
  printf("Book is issued");
}

if(c == 1){
  printf("\n\nSecond book information\n");
printf("----------------------\n\n");

printf("Book title :: %s \n",li2.book_title);
printf("Author name :: %s \n",li2.author_name);
printf("Accession number :: %d \n",li2.acc_no);

if(li2.flag == 1){
  printf("Book is not issued");
}
else{
  printf("Book is issued");
}
}

printf("\nSearch books by author's name\n");
printf("------------------------------------\n");

printf("Enter author name :: ");
scanf("%s",auth);

if(li1.author_name == auth ){
  printf("Book title :: %s \n",li1.book_title);
}
else if(auth == li2.author_name){
  printf("Book title :: %s \n",li2.book_title);
}
else{
  printf("Here is no books belongs to this author\n");
}
    return 0;
}
