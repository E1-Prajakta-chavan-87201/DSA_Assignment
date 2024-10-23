#include<stdio.h>
#define SIZE 6

int binary_search(int arr[SIZE], int key);
int rec_binary_search(int arr[SIZE],int key,int left,int right);
int main()
{
    int arr[SIZE]={11,22,33,44,55,66};
    int key;

    printf("Enter a key to search :");
    scanf("%d", &key);
    
    int index = binary_search(arr,key);

    if (index == -1)
        printf("Key not found  !");
    else
        printf("key is found at index =%d\n", index);


    printf("\n Recursive Binary Search :\n");
    int res = rec_binary_search(arr,key,0,SIZE-1);
    if(res == -1)
        printf("key not found !\n");
    else
        printf("key found at index = %d\n",res);
    return 0;
}

int binary_search(int arr[SIZE],int key)
{   
    int left =0, right= SIZE-1, mid;
while(left <= right)
 {
    mid=(left + right) /2;
    if (key == arr[mid])
    {
    return mid;
    }
    
    if (key < arr[mid])
    {
    right = mid-1;
    }
    else
    {
    left = mid+1;
    }
}
return -1;
}

int rec_binary_search (int arr[SIZE],int key,int left,int right)
{
    int mid,res;

    if(left > right) 
       return -1;

    mid = (left+right) / 2;

    if(key = arr[mid])
       return mid;

    if(key < arr[mid])
{
    res = rec_binary_search(arr,key,left,mid-1);
}
else
{
    res = rec_binary_search(arr,key,mid+1,right);
}
return res;     
}