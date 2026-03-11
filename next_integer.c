#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int stack[100], top = -1;
    int result[n];

    for(int i=0;i<n;i++)
        result[i] = -1;

    for(int i=0;i<2*n;i++){
        while(top!=-1 && arr[stack[top]] < arr[i % n]){
            result[stack[top]] = arr[i % n];
            top--;
        }
        if(i<n){
            stack[++top] = i;
        }
    }

    printf("Next Greater Elements:\n");
    for(int i=0;i<n;i++)
        printf("%d -> %d\n",arr[i],result[i]);
}

int main(){
    int arr[] = {5,3,8,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    nextGreaterElement(arr,n);
}
