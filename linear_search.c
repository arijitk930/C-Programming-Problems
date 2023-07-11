#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,res;
    printf("Enter the element you want to find: ");
    scanf("%d",&key);
    res=linearSearch(arr,n,key);
    printf("Result is: %d ",res);
}