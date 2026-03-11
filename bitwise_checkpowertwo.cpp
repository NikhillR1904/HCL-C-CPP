#include <iostream>
using namespace std;

int main(){

    int n=16;

    if(n>0 && (n & (n-1))==0)
        cout<<"Power of Two";
    else
        cout<<"Not Power of Two";
}
