#include<stdio.h>
#include<malloc.h>
struct NODE
{
int data;
struct NODE*link;
}*header,*newnode,*firstnode,*ptr,*ptr1,*insertfnode,*insertenode,*insertnodeany,*ptr2,rear;
void main()
{
int ch,key,m;
void create();
void traverse();
void insertfront();
void insertend();
void insertany();
void deletefront();
void deleteend();
void deleteany();
create();
traverse();
do
{
printf("\n\t CHOICES \n");
printf("\n 1.INSERTION AT FRONT\n 2.INSERTION AT END\n 3.INSERTION AT ANY POSITION\n 4.DELETION AT FRONT\n 5.DELETION AT END\n 6.DELETION AT ANY POSITION\n 7.EXIT\n");
printf("\n Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1 : insertfront();
         traverse();
         break;
case 2 : insertend();
         traverse();
         break;
case 3 : insertany();
         traverse();
         break;
case 4 : deletefront();
         traverse();
         break;
case 5 : deleteend();
         traverse();
         break;
case 6 : deleteany();
         traverse();
         break;
case 7 : exit(0);
         break;
default : printf("Wrong choice\n");
          break;
}
}while(ch!=7);
}
void create()
{
if ( header =='\0' )
{
ptr = header;
firstnode = (struct NODE) * malloc(sizeof(struct NODE));
printf("\n enter data : ");
scanf("%d",&firstnode -> data);
firstnode -> link = header;
header = firstnode;
rear = firstnode;
}
while(1)
{
newnode = ( struct NODE ) * malloc (sizeof(struct NODE));
printf("enter data : ");
scanf("%d",&newnode -> data);
if ( newnode -> data == 0 )
{
break;
}
newnode -> link = header;
rear -> link = newnode;
rear = newnode;
}
}
void traverse()
{
ptr = header;
printf("\n the linkedlist is :\n ");
printf("\n DATA \t ADDRESS \t LINK \n");
do
{
printf("\n%d",ptr -> data);
printf("\t%d",&ptr -> data);
printf("\t%d",ptr -> link);
ptr = ptr -> link;
}
while(ptr != header);
}
void insertfront()
{
int data;
insertfnode = (struct NODE) * malloc ( sizeof(struct NODE));
if ( insertfnode == '\0' )
{
printf("memory underflow");
}
else
{
printf("INSERTION AT FRONT");
printf("enter data : ");
scanf("%d",&data);
insertfnode -> link = header;
insertfnode -> data = data;
rear -> link = insertfnode;
header = insertfnode;
}
}
void insertend()
{
int m;
insertenode  = (struct NODE) * malloc (sizeof(struct NODE));
if ( insertfnode == '\0' )
{
printf("memory underflow");
}
else
{
printf("INSERTION AT END");
printf("enter data:");
scanf("%d",&m);
ptr = header;
while(ptr -> link != header)
{
ptr = ptr -> link;
insertenode -> link =header;
insertenode -> data = m;
rear=insertenode;
}
}
}
void insertany()
{
int y,key;
insertnodeany  = (struct NODE) * malloc (sizeof(struct NODE));
if ( insertfnode == '\0' )
{
printf("memory underflow");
}
else
{
printf("INSERTION AT ANY POSITION");
ptr = header;
printf("enter data and key");
scanf("%d%d",&y,&key);
while ((ptr -> data != key )&&(ptr ->link != header))
{ptr==ptr ->link;
}
if(ptr ->link == header)
{
printf("key not found");
}
else
{insertnodeany -> link = ptr -> link;
insertnodeany -> data = y;
ptr -> link = insertnodeany;
}}}
void deletefront()
{
if ( ptr == '\0')
{
printf("list is empty");
}
else
{
ptr = header;
printf(" DELETION AT FRONT");
ptr1 = ptr -> link;
header -> link = ptr1;
header = ptr1;
rear -> link = header;
free(ptr);
}
}
void deleteend()
{
ptr = header;
if ( ptr =='\0' )
{
printf("list is empty");
}
else
{
while ( ptr -> link != header )
{
ptr2 = ptr;
ptr = ptr -> link;
}
ptr -> link = header;
rear =ptr2;
free(ptr);
}
}
void deleteany()
{
int key;
ptr = header;
if ( ptr == '\0' )
{
printf("list is empty");
}
else
{
printf("DELETION AT ANY POSITION");
printf("enter data:");
scanf("%d",&key);
while (( ptr -> data != key )&&(ptr ->link != header ))
{
ptr1 = ptr;
ptr = ptr ->link;
}
if ( ptr -> link == header )
{
printf("key not found");
}
else
{
ptr1 -> link = ptr ->link;
free(ptr);
}
}
}

