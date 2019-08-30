#include <iostream>

int minimum(int A[],int n,int x){
    if(n==0){
        return x;
    }
    if(A[n-1]<x){
        x=A[n-1];
    }
    minimum(A,n-1,x);
}

int main(){
    int A[] = {14,13,27,69};
    int n = sizeof(A)/sizeof(*A);
    int x = A[n-1];
    int m = minimum(A,n-1,x);
    std::cout << m ; 
    return 0;
}