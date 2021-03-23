#include<stdio.h>
#include<conio.h>
void push();
void pop();
void  display();
struct node
{
    int val;
    struct node*next;
};
struct node*head;
void main()
int choice = 0;
while(choice!=4)
{
    printf("\n\nChoose one from the below option..");
    printf("\n1.pus\n2.pop\n 3.display\n 4.exit");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case1:
        {
            push();
            break;
        }
        case2:
        {
        pop();
        break;
    }
    case3:
    {
    display();
    break;
    }
    case4:
    {
        print("exit");
        break;
    }
    default:
    {
        print("enter a valid choice");
    }};
    void push()
    {
        int val;
        structnode *ptr = (struct node*)malloc(sizeof(struct*node))
        if(ptr==NULL)
        {
            print ("not able to push")
        }
        else
        {
            printf("enter the values")
            scanf("%d",&val);
            if(head==NULL)
            {
                ptr->val=val;
                ptr->next=NULL:
                head=ptr;
            }
            else{
                ptr->next=head;
                head=ptr;
            }
            printf("item pushed");
        }}
        void pop()
        {
            int item;
            struct node * ptr;
            if(head==NULL)
            {
                printf("stack underflow");
            }
            else
            {
              item = head->val;
              ptr=head;
              head=head->next;
              free(ptr);
              printf("item popped");
            }}
            void display()
            {
            int i;
            struct node *ptr;
            ptr=head;
            if(ptr==NULL)
            {
                printf("stack empty");

            }
            else()
            {
                printf("stack elements");
                while(ptr!=NULL)
                {
                  printf ("%d\n",ptr->val);
                  ptr=ptr->next;

                }
            }
            }
