#include<stdio.h>
#define SIZE 5
#define SWAP(a,b) int temp=a; a=b; b=temp;

void bubble_sort(int arr[SIZE]);
void display(int arr[SIZE]);
void Efficient_bubble_sort(int arr[SIZE]);
int iterations, comparisions;

int main()
{
    int arr[SIZE] = {11,22,33,44,55};
    printf("\n Before sort: \n");
    display(arr);
    bubble_sort(arr);
    printf("\n After sort :\n");
    
    Efficient_bubble_sort(arr);
    display(arr);

    printf("\n Iteraations = %d comparisions = %d\n",iterations,comparisions);

    return 0;
}

void bubble_sort(int arr[SIZE])
{
    int its,pos;
    int iterations= 0, comparisions=0;
    for(its=0; its < SIZE-1; its++)
    {
        iterations++;
        for(pos=0;pos < SIZE-1-its;pos++)
        {
            comparisions++;
            if(arr[pos] > arr[pos+1])
            {
                SWAP(arr[pos],arr[pos+1]);
            }
        }
    }
    printf("\n iterations = %d comparisions = %d\n", iterations,comparisions);

}

void display(int arr[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
    printf("%4d", arr[i]);
    }
}
//Efficient bubble sort

void Efficient_bubble_sort(int arr[SIZE])
{
    int its,pos;
    int iterations=0, comparisions=0,flag;
    for(its=0; its<SIZE-1; its++)
    {
        flag = 0;
        iterations++;
        for(pos=0; pos<SIZE-1-its; pos++)
        {
            comparisions++;
            if(arr[pos] > arr[pos+1])
            {
                SWAP(arr[pos],arr[pos]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
    printf("\n Iteraations = %d comparisions = %d\n",iterations,comparisions);
}
