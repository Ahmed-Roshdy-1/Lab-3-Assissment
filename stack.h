#define max 20
typedef char stackEntry;

typedef struct stack{

     int top;

     int numL;   //to count character of left part

     int numR;  //to count character of right part

     int x;    //to check for charter ":" colon

     stackEntry entry[max];

}Stack;
void createStack(Stack *ps);
int stackFull(Stack *ps);
void push(stackEntry e,Stack *ps);
void clearStack(Stack *ps);         //clear stack to check again



int haveAcolon(Stack *ps);         //to check for charter ":" colon

int numRight(Stack *ps);          //to count character of right part

int numLeft(Stack *ps);          //to count character of left part

int LsameR(Stack *ps);          //to check The left and right parts are exactly the same

int LmirrorR(Stack *ps);       //to check  The left is a mirror of the right part

