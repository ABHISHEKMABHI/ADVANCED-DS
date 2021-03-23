#include<stdio.h>
#include<alloc.h>
struct NODE
{
int data;
struct NODE*Rlink;
struct node*Llink;
}*header,*newnode,*firstnode,*ptr,*ptr1,*insertfnode,*insertenode,*insertnodeany,*ptr2;
void main()
{
int ch;
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
firstnode -> Rlink = '\0';
header = firstnode;
firstnode->Llink=header;
ptr=firstnode;
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
newnode -> Rlink = '\0';
ptr->Rlink = newnode;
newnode->Llink=ptr;
ptr = newnode;
}
}
void traverse()
{
ptr = header;
printf("\n the linkedlist is :\n ");
printf("\n DATA \t ADDRESS \t RLINK \t LLINK \n");
do
{
printf("\n%d",ptr -> data);
printf("\t%u",&ptr -> data);
printf("\t%u",ptr -> Llink);
printf("\t%u",ptr -> Rlink);
ptr = ptr -> link;
}
while(ptr != 0);
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
ptr=header;
insertfnode->data=data;
insertfnode -> Llink = '\0';
insertfnode->Rlink=ptr;
ptr->Llink=insertfnode;
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
while(ptr -> link != '\0')
ptr = ptr -> Rlink;
ptr->Rlink=insertenode;
insertenode -> Llink =ptr;
insertenode -> data = m;
insertenode -> Rlink ='\0';
rear=insertenode;
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
while ((ptr -> data != key )&&(ptr ->Rlink != '\0'))
{ptr=ptr ->Rlink;
}
if(ptr=='\0')
{
printf("key not found");
}
else
{
ptr=ptr->Rlink;
ptr->Rlink=insertnodeany;
insertnodeany->data=y;
insertnodeany->Llink=ptr;
insertnodeany->Rlink=ptr1;
ptr1->Llink=insertnodeany;
}}}
void deletefront()
{
if ( ptr == '\0')
{
printf("list is empty");
}
else
{
printf(" DELETION AT FRONT");
ptr1 = ptr -> Rlink;
ptr->Llink='\0';
header=ptr1;
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
while ( ptr -> Rlink != '\0' )
{
ptr=ptr->RLink;
ptr1=ptr->Llink;
ptr1->Rlink='\0';
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
while (( ptr -> data != key )&&(ptr ->Rlink !='\0'))
{
ptr = ptr ->Rlink;
}
if ( ptr == '\0')
{
printf("key not found");
}
else
{
ptr1 = ptr ->Llink;
ptr2=ptr->Rlink;
ptr1->Rlink=ptr2;
ptr2->Llink=ptr1;
free(ptr);
}
}
}

