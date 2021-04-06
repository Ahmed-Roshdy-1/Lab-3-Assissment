#include "stack.h"

void createStack(Stack *ps){

     ps->top=0;
     ps->numL=0;
     ps->numR=0;
     ps->x=0;

}
int stackFull(Stack *ps){


    return (ps->top==max);
}

void push(stackEntry e,Stack *ps){


   if(e!=':'&&ps->numL==ps->top){
                                                           ps->entry[ps->top++]=e;
    ps->numL++;
   }else if(e==':'){
       ps->entry[ps->top++]=e;
      ps->x=1;
   }else{

        ps->entry[ps->top++]=e;
        ps->numR++;
       }


   }

int haveAcolon(Stack *ps){

   return (ps->x==1);           //to check if colon existed
}

int numLeft(Stack *ps){

 return(ps->numL);             //number of character right part
}



int numRight(Stack *ps){

 return (ps->numR);             // number of character right part
}



int LsameR(Stack *ps){

    int count=0;
    int n=ps->numL+1;

     if(ps->numL==ps->numR){
        for(int i=0;i<ps->numL;i++){
            if(ps->entry[i]==ps->entry[n]){
                count++;
                n++;
            }else{
                break;
            }
        }
     }
     return(count==ps->numL);            //to check The left and right parts are exactly the same


}


int LmirrorR(Stack *ps){
    int m=0;
    int y=ps->top-1;

    if(ps->numL==ps->numR){
        for(int i=0;i<ps->numL;i++){
            if(ps->entry[i]==ps->entry[y]){
                m++;
                y--;
            }else{
                break;
            }
        }
    }
   return(m==ps->numL);                   //to check  The left is a mirror of the right part

}
void clearStack(Stack *ps){

     ps->top=0;
     ps->numL=0;
     ps->numR=0;
     ps->x=0;

}

