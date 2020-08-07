#include<stdio.h>
void input_array(int array[], int size);
void display_array(int array[], int size);
int main()
{
    int a[100];
    int size = 5;
    input_array(a, size);
    display_array(a, size);
}
void input_array(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d", array[i]);
    }
}

void display_array(int array[], int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",array[i]);
}
