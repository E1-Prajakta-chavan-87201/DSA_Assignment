#include<stdio.h>

#define SIZE 8
void insertion_sort(int arr[SIZE]);
void display(int arr[SIZE]);
int iterations,comparisions;

int main()
{
    int arr[SIZE]={44,55,66,33,88,22,77,11};
    printf("\n Before swap \n");
    display(arr);
    insertion_sort(arr);
    printf("\n After sort :\n");
    display(arr);
    
    printf("\n Iterations = %d Comparisions = %d\n",iterations,comparisions);

    return 0;
}

void insertion_sort(int arr[SIZE])
{
    int i,j,temp;
    
    for(i=1; i< SIZE; i++)
    {
        temp = arr[i];
        iterations++;
        for(j = i-1; j>=0 && temp < arr[j] ;j--)
        {
            comparisions++;
            arr[j+1] = arr[j];
        }

        arr[j+1] = temp;   
    }
}


void display(int arr[SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
}