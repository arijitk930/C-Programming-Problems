#include<stdio.h>
int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key,res;
    printf("Enter the key you want to find: ");
    scanf("%d",&key);
    res=binarySearch(arr,n,key);
    printf("Result is: %d",res);
    return 0;

}