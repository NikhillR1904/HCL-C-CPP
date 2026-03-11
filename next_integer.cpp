#include <iostream>
#include <stack>
using namespace std;

void nextGreaterElement(int arr[], int n){
    stack<int> s;
    int result[n];

    for(int i=0;i<n;i++)
        result[i] = -1;

    for(int i=0;i<2*n;i++){
        while(!s.empty() && arr[s.top()] < arr[i%n]){
            result[s.top()] = arr[i%n];
            s.pop();
        }

        if(i<n)
            s.push(i);
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" -> "<<result[i]<<endl;
}

int main(){
    int arr[] = {5,3,8,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    nextGreaterElement(arr,n);
}
