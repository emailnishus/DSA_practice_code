#include<stdio.h>
int linearsearch(int arr[], int size, int element){
    //linear search O(n)
    for(int i = 0;i < size;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int Binarysearch(int arr[],int size,int element){
    int low = 0,high = size-1,mid;

    while (low<=high)
    {
       mid = (low + high)/2;

       if(arr[mid] == element){
           return mid;
       }
       if(arr[mid]<element){
            low = mid+1;
       } 
       else{
            high = mid-1;
       }
    }
    return -1;

}

int main(){
    // linear search
    // int arr[] = {1,2,3,4,5,7,78,324,67323,567,24,67,65};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int element = 67;
    // int searchIndex = linearsearch(arr,size,element);
    // printf("The element %d was found at index %d \n",element,searchIndex);
    // return 0;
     
    //Binary search
    int arr[] = {1,2,3,4,5,7,22,23,67,74,87,95};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 67;
    int searchIndex = Binarysearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchIndex);
    return 0;
}

