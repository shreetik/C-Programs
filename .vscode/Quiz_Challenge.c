#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void highestScore();
void resetscore();
void help();

int main(){
    int i,c=0;
char ch,ch2,name[15],txt[100],ans;
FILE *fp;

mainhome:
system("cls");
printf("\t\t\t\t----------------------------------\n\n");
printf("\t\t\t\t\t   Quiz Challenge\n\n");
printf("\t\t\t\t----------------------------------\n\n");

printf("\t\t\t\t\t  S >> START\n\n");
printf("\t\t\t\t\t  H >> HIGHEST SCORE\n\n");
printf("\t\t\t\t\t  R >> RESET SCORE\n\n");
printf("\t\t\t\t\t  I >> HELP\n\n");
printf("\t\t\t\t\t  X >> EXIT\n\n");
printf("\t\t\t\t----------------------------------\n\n");

printf("\t\t\t\t   Enter your choice >> ");   
 ch = getch();

  if(ch == 'S' || ch == 's'){
      help();
      printf("\t\t\t\t\t >> Press \'Y\' for start the game and \'N\' for go back to main menu...\n\n");
      ch2 = getch();
      if(ch2 == 'Y' || ch2 == 'y'){
          goto practice;
      }
      else if(ch2 == 'N' || ch2 == 'n'){
      goto mainhome;
      }
  }

  if(ch == 'H' || ch == 'h'){
    
      highestScore();
      getch();
      goto mainhome;
  } 

  if(ch == 'R' || ch == 'r'){
    
      resetscore();
      getch();
      goto mainhome;
  } 

  if(ch == 'I' || ch == 'i'){
      help();
      getch();
      goto mainhome;
  } 

    if(ch == 'X' || ch == 'x'){
    system("cls");
    printf("Exiting the program....");
    exit(0);
  } 
  
  practice:
  system("cls");
  c = 0;
   printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n");
   printf("\t\t\t\t\t                                   Pratice Stage \n");
   printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n\n");
  printf("\t\t\t\t\t >> Enter Your Name >> ");
  gets(name);
  system("cls");
  

   for(i=0;i<5;i++){
       switch(i){
           case 0:{
              system("cls");
               printf("\t\t\t\t\t 1. Which is the biggest continent in the world?  \n\n");
               printf("\t\t\t\t\t      a. Australia            b. Africa \n\n");
               printf("\t\t\t\t\t      c. Asia                 d. Europe\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf("%c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. Asia] ");
               }
               getch();
               break;
           }

            case 1:{
              system("cls");
               printf("\t\t\t\t\t 2. Which planet is closest to the sun?  \n\n");
               printf("\t\t\t\t\t      a. Earth            b. Jupiter \n\n");
               printf("\t\t\t\t\t      c. Venus            d. Mercury\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'd' || ans == 'D'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is d. Mercury] ");
               }
               getch();
               break;
           }

           case 2:{
              system("cls");
               printf("\t\t\t\t\t 3. How many cards are there in a pack of cards?  \n\n");
               printf("\t\t\t\t\t      a. 24 cards            b. 56 cards \n\n");
               printf("\t\t\t\t\t      c. 52 cards            d. 30 cards\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. 52 cards] ");
               }
               getch();
               break;
           }

              case 3:{
              system("cls");
               printf("\t\t\t\t\t 4. Which is the fastest land animal on earth?  \n\n");
               printf("\t\t\t\t\t      a. Cheetah            b. Deer \n\n");
               printf("\t\t\t\t\t      c. Lion               d. Giraffe\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'a' || ans == 'A'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is a. Cheetah] ");
               }
               getch();
               break;
           }

                case 4:{
              system("cls");
               printf("\t\t\t\t\t 5. Which of the following has no Skeleton at all?  \n\n");
               printf("\t\t\t\t\t      a. Star fish            b. Sponge \n\n");
               printf("\t\t\t\t\t      c. Jelly fish           d. Silver fish\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. Jelly fish] ");
               }
               getch();
               break;
           }
       }
   }

   if(c >= 3){
       system("cls");
       printf("\t\t\t\t\t [Great..!!! Your Score is >> %d ] \n\n",c);
       printf("\t\t\t\t\t [Congratulation %s , You are eligible for Challenge Round.]  \n\n",name);
       printf("\t\t\t\t\t Enter any key to continue..  \n\n");
       getch();
       goto Challenge;
   }
   else{
       system("cls");
       printf("\t\t\t\t\t [Your Score is >> %d ] \n\n",c);
       printf("\t\t\t\t\t [Sorry %s , You are not eligible for Challenge Round.]  \n\n",name);
       printf("\t\t\t\t\t Enter any key to go back to main menu..  \n\n");
       getch();
       goto mainhome;
   }

   Challenge:
   system("cls");
   printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n");
   printf("\t\t\t\t\t                                   Challenge Stage \n");
   printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n\n");
   printf("\t\t\t\t\t >> Welcome %s \n",name);
   printf("\t\t\t\t\t >> Here you attend total \"20\" questions, Each question carry \"1\" mark \n");
   printf("\t\t\t\t\t >> All the best %s \n\n\n",name);
   printf("\t\t\t\t\t >> Enter any key to continue  ");
   getch();

   system("cls");
   c = 0;
   for(i=0;i<20;i++){
       switch(i){
           
           case 0:{
                system("cls");
               printf("\t\t\t\t\t 1. The World Largest desert is?  \n\n");
               printf("\t\t\t\t\t      a. Thar            b. Kalahari \n\n");
               printf("\t\t\t\t\t      c. Sahara          d. Sonoran\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. Sahara] ");
               }
               getch();
               break;
           }

           case 1:{
                system("cls");
               printf("\t\t\t\t\t 2. Mount Everest is located in ?  \n\n");
               printf("\t\t\t\t\t      a. India           b. Nepal \n\n");
               printf("\t\t\t\t\t      c. Tibet           d. China\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. Nepal] ");
               }
               getch();
               break;
           }

            case 2:{
                system("cls");
               printf("\t\t\t\t\t 3. Which soil is suitable for agriculture ?  \n\n");
               printf("\t\t\t\t\t      a. Red soil          b. Sand \n\n");
               printf("\t\t\t\t\t      c. Black soil        d. Peaty soil\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'd' || ans == 'D'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is d. Peaty soil] ");
               }
               getch();
               break;
           }

              case 3:{
                system("cls");
               printf("\t\t\t\t\t 4. The Gate way of India is ?  \n\n");
               printf("\t\t\t\t\t      a. Chennai           b. Mumbai \n\n");
               printf("\t\t\t\t\t      c. Kolkata           d. New Delhi\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. Mumbai] ");
               }
               getch();
               break;
           }

           case 4:{
                system("cls");
               printf("\t\t\t\t\t 5. In what year was the first iPhone released?\n\n");
               printf("\t\t\t\t\t      a. 2007           b. 2008 \n\n");
               printf("\t\t\t\t\t      c. 1999           d. 2005\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'a' || ans == 'A'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is a. 2007] ");
               }
               getch();
               break;
           }

              case 5:{
                system("cls");
               printf("\t\t\t\t\t 6. How many hearts does an octopus have?\n\n");
               printf("\t\t\t\t\t      a. 1           b. 2 \n\n");
               printf("\t\t\t\t\t      c. 3           d. 4\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. 3] ");
               }
               getch();
               break;
           }

                case 6:{
                system("cls");
               printf("\t\t\t\t\t 7. Who developed Yahoo?\n\n");
               printf("\t\t\t\t\t      a. Dennis Ritchie       b. David Filo \n\n");
               printf("\t\t\t\t\t      c. Vint Cerf            d. Steve Case\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. David Filo] ");
               }
               getch();
               break;
           }

              case 7:{
                system("cls");
               printf("\t\t\t\t\t 8. In what year was the \"@\" chosen for its use in e-mail addresses?\n\n");
               printf("\t\t\t\t\t      a. 1976                 b. 1972 \n\n");
               printf("\t\t\t\t\t      c. 1980                 d. 1984\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. 1972] ");
               }
               getch();
               break;
           }

           
            case 8:{
                system("cls");
               printf("\t\t\t\t\t 9. Where is the headquarters of Intel located?\n\n");
               printf("\t\t\t\t\t      a. Washington           b. Arizona \n\n");
               printf("\t\t\t\t\t      c. Virginia             d. California\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'd' || ans == 'D'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is d. California] ");
               }
               getch();
               break;
           }

           case 9:{
                system("cls");
               printf("\t\t\t\t\t 10. Which of the following is not a computer language?\n\n");
               printf("\t\t\t\t\t      a. Windows 98           b. PASCAL \n\n");
               printf("\t\t\t\t\t      c. FORTRAN              d. C\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'a' || ans == 'A'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is a. Windows 98] ");
               }
               getch();
               break;
           }

           case 10:{
                system("cls");
               printf("\t\t\t\t\t 11. The head quarters of world trade organization is in?\n\n");
               printf("\t\t\t\t\t      a. Montreal            b. Seattle \n\n");
               printf("\t\t\t\t\t      c. Geneva              d. Africa\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. Geneva] ");
               }
               getch();
               break;
           }

              case 11:{
                system("cls");
               printf("\t\t\t\t\t 12. How many bits is a byte?\n\n");
               printf("\t\t\t\t\t      a. 4             b. 8 \n\n");
               printf("\t\t\t\t\t      c. 16            d. 32\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. 8] ");
               }
               getch();
               break;
           }

           case 12:{
                system("cls");
               printf("\t\t\t\t\t 13. Google is a:\n\n");
               printf("\t\t\t\t\t      a. Search Engine             b. Number in Math \n\n");
               printf("\t\t\t\t\t      c. Directory of images       d. Chat service on the web\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'a' || ans == 'A'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is a. Search Engine] ");
               }
               getch();
               break;
           }

             case 13:{
                system("cls");
               printf("\t\t\t\t\t 14. Which is not an Internet protocol?\n\n");
               printf("\t\t\t\t\t      a. HTTP             b. FTP \n\n");
               printf("\t\t\t\t\t      c. STP              d. IP\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. STP] ");
               }
               getch();
               break;
           }

           case 14:{
                system("cls");
               printf("\t\t\t\t\t 15. The \"home page\" of a web site is:\n\n");
               printf("\t\t\t\t\t      a. The largest page             b. The last page \n\n");
               printf("\t\t\t\t\t      c. The first page               d. The most colorful page\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. The first page] ");
               }
               getch();
               break;
           }

           case 15:{
                system("cls");
               printf("\t\t\t\t\t 16. What kind of data can you send by e-mail?\n\n");
               printf("\t\t\t\t\t      a. Audio             b. Pictures \n\n");
               printf("\t\t\t\t\t      c.  Video            d. All of the above\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'd' || ans == 'D'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is d. All of the above] ");
               }
               getch();
               break;
           }

           case 16:{
                system("cls");
               printf("\t\t\t\t\t 17. What is the only function all C program must contain?\n\n");
               printf("\t\t\t\t\t      a. start             b. system \n\n");
               printf("\t\t\t\t\t      c. main              d. program\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. main] ");
               }
               getch();
               break;
           }

           case 17:{
                system("cls");
               printf("\t\t\t\t\t 18. Which of the following is not a correct variable type?\n\n");
               printf("\t\t\t\t\t      a. float             b. int \n\n");
               printf("\t\t\t\t\t      c. real              d. double\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. real] ");
               }
               getch();
               break;
           }

           case 18:{
                system("cls");
               printf("\t\t\t\t\t 19. Which header file should be included to use functions like malloc and calloc?\n\n");
               printf("\t\t\t\t\t      a. memory.h              b. stdlib.h \n\n");
               printf("\t\t\t\t\t      c. string.h              d. dos.h\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'b' || ans == 'B'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is b. stdlib.h] ");
               }
               getch();
               break;
           }

           case 19:{
                system("cls");
               printf("\t\t\t\t\t [Last Question]\n\n");
               printf("\t\t\t\t\t 20. What function should be used to free the memory allocated by calloc?\n\n");
               printf("\t\t\t\t\t      a. dealloc              b. malloc \n\n");
               printf("\t\t\t\t\t      c. free                 d. memalloc\n\n");
               printf("\t\t\t\t\t  Give Your Answer >> ");
               scanf(" %c",&ans);
               if(ans == 'c' || ans == 'C'){
                   c++;
                   printf("\n\n\t\t\t\t\t      [Correct Answer] ");
               }
               else{
                   printf("\n\n\t\t\t\t\t [Opps Wrong Answer.!!! Correct Answer is c. free] ");
               }
               getch();
               break;
           }

           

       }
   }
   system("cls");
   fp = fopen("Score.txt","w");
   fprintf(fp,"\t\t\t\t\t         Highest Score\n\t\t\t\t\t---------------------------------\n\t\t\t\t\t     Name      |       Score\n\t\t\t\t\t---------------------------------\n\t\t\t\t\t  %s               %d",name,c);
   fclose(fp);
   printf("\t\t\t\t\t Good job %s \n\n",name);
   printf("\t\t\t\t\t Your score is %d out of 20\n\n",c);
   printf("\t\t\t\t\t Enter any key to go back to main menu\n\n",name);
   getch();
   goto mainhome;

    return 0;
}

void highestScore(){
    char c;
    FILE *fp;
    system("cls");
    fp = fopen("Score.txt","r");
    fseek(fp,0,SEEK_END);
   
    if(ftell(fp) == 0){
        printf("\t\t\t\t\t ---------------------------------------------------------------------\n");
         printf("\t\t\t\t\t Sorry no High Score set yet, Play the game for set the High Score..\n"); 
         printf("\t\t\t\t\t ---------------------------------------------------------------------\n");
    }
    else{
        fclose(fp);
        system("cls");
        fp = fopen("Score.txt","r");
        do{
         c = getc(fp);
         printf("%c",c);
          }while(c!=EOF);
        fclose(fp);
    }
}

void resetscore(){
    FILE *fp;
    system("cls");
    fp = fopen("Score.txt","w");
    fprintf(fp,"\t\t\t\t\t Score is Reset.. ");
    fclose(fp);
         printf("\t\t\t\t\t -----------------------------\n");
         printf("\t\t\t\t\t Score is successfully Reset..\n"); 
         printf("\t\t\t\t\t -----------------------------\n");
}

void help(){
    system("cls");
    printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n");
    printf("\t\t\t\t\t                          Welcome to Quiz Challenge \n");
    printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n\n");
    printf("\t\t\t\t\t >> Here you attend two stages of the game. \n\n");
    printf("\t\t\t\t\t >> First one is Pratice Round and Second one is Challenge Round. \n\n");
    printf("\t\t\t\t\t >> In Pratice Round you have to attend around \"5\" questions\n\n");
    printf("\t\t\t\t\t    If you give at least \"3\" Correct answers then you will be eligible for Challenge Round.\n\n");
    printf("\t\t\t\t\t >> In Challenge Round you have to attend around \"20\" questions.\n\n");
    printf("\t\t\t\t\t >> Each Question carries \"1\" mark and there is no negative marking.\n\n");
     printf("\t\t\t\t\t---------------------------------------------------------------------------------------------- \n\n");
    
}

