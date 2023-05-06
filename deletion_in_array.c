#include<stdio.h>

void display(int arr[],int n){
    //traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int ind_deletion(int arr[],int size, int index){
   //deletion
    for (int i = index ; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}


int main(){

    int arr[100] = {1,2,5,77,88};
    int size = 5, index = 1;
    display(arr,size); 

    ind_deletion(arr,size,index);

    size-=1;
    display(arr,size);
    return 0;

}