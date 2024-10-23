#include<stdio.h>
#define SIZE 6

int linear_search(int arr[SIZE],int key);
int rec_linear_search(int arr[SIZE],int key,int left, int right);
int comparisions;

int main()
{
    int arr[SIZE]={11,22,33,44,55,66};
    int key;
    
    printf("Enter the key to search\n");
    scanf("%d", &key);

    int result = linear_search(arr,key);

    if(result == -1)
        printf("Ke
        y not found !\n");
    else
        printf("key is found at index = %d\n", result);

    return 0;
}

int linear_search(int arr[SIZE],int key)
{
        for(int index = 0; index < SIZE; index++)
        {
            comparisions++;
            if(key == arr[index])
            {
                return index; 
            }
    }
return -1;
}
int rec_linear_search(int arr[SIZE],int key,int left, int right)
{
   int mid,res;

   if(left > right)
       return -1;

   mid = (left+right) / 2;

   if(key == arr[mid])
       return mid;

   if(key < arr[mid])
{
    res = rec_linear_search(arr,key,left,mid-1);
}
else
{
    res = rec_linear_search(arr,key,mid+1, right);
}
return -1;
}