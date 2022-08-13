#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[],elemnt,i;
top=-1;

void push()
{
    if(top>=(MAX-1))
    {
            printf("STACK IS OVER FLOW");
    }
    else
    {
        printf("ENTER YOUR ELEMENT:\n");
        scanf("%d",&elemnt);
        top=top+1;
        stack[top]=elemnt;
    }

}
void pop()
{
    if(top==-1)
    {
        printf("STACK IS EMPTY:\n");
    }

    else
        {
        elemnt=stack[top];
        top=top-1;
        printf("DELETED ELEMENT IS: %d ",elemnt);
    }
    }
void display()
{
    int i;
    if(top==-1)
    {
        printf("STACK IS EMPTY! \n");
    }
    else
    {
    printf("ELEMENTS OF STACK IS:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);

    }
    printf("\nTHE TOP ELEMENT IS: %d\n",stack[top]);
    }
}
void change()
{
    int num,i,pos;
    printf("ENTER THE NUMBER TO BE INSERTED: ");
    scanf("%d",&num);
    printf("ENTER THE POSITION TO BE INSERTED: ");
    scanf("%d",&pos);
    for(i=top-1;i>=pos-1;i--){

        stack[i+1]=stack[i];
}
    stack[pos-1]=num;
    top;
    printf("AFTER ELEMENT INSERTED:\n ");
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);

    }
}

int main()
{
    int choice,loop,i,n;
    do{
    printf("PLEASE ENTER YOUR CHOICE:\n 1.PUSH \n 2.POP \n 3.DISPLAY\n 4.CHANGE\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("PLEASE ENTER NUMBER OF ELEMENTS IN ISTACK:\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                 push();
                }
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: change();
        break;
        default: printf("PLEASE GIVE VALID INPUT\n");
    }
    printf("\nDO YOU WANNA CONTINUE: 1 continue 0 exit \n");
    scanf("%d",&loop);
    }while(loop!=0);
}






