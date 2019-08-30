#include <iostream> 

int SumaPP(int A[],int n){
    if((n-1)==0)
        return A[n-1];
    return A[n-1]+SumaPP(A,n-1);
}

int SumaT(int A[], int n,int m){
    if(n<0){
        return m;
    }
    else{
        int aux = m+A[n];
        SumaT(A,n-1,aux);
    }
}

int SumaCola(int A[],int n){
    n-=1;
    int m = 0;
    SumaT(A,n,m);
}

int main(){
    int L[] = {1,2,3,4,5};
    std::cout << SumaPP(L,5);
    std::cout << SumaCola(L,5);
    return 0;
}