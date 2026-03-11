#include <stdio.h>

int main(){

    int arr[] = {2,3,2,4,4};
    int n = 5;

    int result = 0;

    for(int i=0;i<n;i++)
        result ^= arr[i];

    printf("Unique Element = %d",result);
}
