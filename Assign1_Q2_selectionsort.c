//2. Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons and print both in main function.

#include<stdio.h>
#define SIZE 6
#define swap(a,b) int temp=a; a=b; b=temp;

void selection_sort(int arr[SIZE]);
void display(int arr[SIZE]);
int iterations, comparisions;

int main()
{
    int arr[SIZE] = {22,66,55,33,44,11};
    printf("\n Before sort :\n");
    display(arr);
    selection_sort(arr);
    printf("\n After sort :\n");
    display(arr);

    printf("\n Iterations = %d Comparisions = %d\n",iterations,comparisions);

    return 0;
}

void selection_sort(int arr[SIZE])
{
    int sel_pos,pos;
    int iterations = 0,comparisions = 0;

    //iterations
    for (sel_pos= 0; sel_pos<SIZE-1; sel_pos++)
    {
        iterations++;
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            comparisions++;
            if(arr[sel_pos] > arr[pos])
            {
                swap(arr[sel_pos],arr[pos]);
            } 
        }
    }
    printf("\n Iterations = %d Comparisions = %d\n",iterations,comparisions);
}

void display(int arr[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%4d",arr[i]);
    }
}
