#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
   Stack s;

   stackEntry e;

   createStack(&s);

   int L,R;

   while(1){


printf("N         No colon on the line\n");

printf("L         The left part (before the colon) is longer than the right\n");

printf("R         The right part (after the colon) is longer than the left\n");

printf("D         The left and right parts have the same length but are different\n");

printf("S         The left and right parts are exactly the same \n");

printf("M         The left is a mirror of the right part \n\n\n");

printf("enter some element consist of two parts separated by colon ':' ");

scanf("%c",&e);
while(!stackFull(&s) && e!='\n'){
    push(e,&s);
    scanf("%c",&e);
}

 L=numLeft(&s);

 R=numRight(&s);

 if(haveAcolon(&s)){
    if(L>R){
        printf("\nL\n\n");

        clearStack(&s);
    }else if(R>L){
      printf("\nR\n\n");

      clearStack(&s);
    }else{
        if(LsameR(&s)){
          printf("\nS\n\n");

          clearStack(&s);
             }else if(LmirrorR(&s)){
                 printf("\nM\n\n");

                 clearStack(&s);

             }else{
                printf("\nD\n\n");

                clearStack(&s);
             }


    }
 }else{

     printf("\nN\n\n");

     clearStack(&s);

 }

   }



return 0;
}
