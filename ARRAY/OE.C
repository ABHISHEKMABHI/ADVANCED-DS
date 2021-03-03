#include<stdio.h>
void odd_or_even(int a);

int main()
{
    int arr[] = {13,56,71,38,93}, i;

    for(i = 0; i < 5; i++)
    {
        odd_or_even(arr[i]); 
    }
    return 0;
}

void odd_or_even(int a)
{
    if(a%2==0)
    {
        printf("%d is even\n", a);
    }

    else
    {
        printf("%d is odd\n", a);
    }
    getch();
    }