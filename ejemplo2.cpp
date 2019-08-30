#include <iostream>

int FibonacciPP(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return FibonacciPP(n-1)+FibonacciPP(n-2);
}


int FiboT(int n,int nexxt,int current){
    if(n<=1){
        return current;
    }
    else{
        int aux = nexxt;
        FiboT(n-1,nexxt+current,aux);
    }
}

int FibonacciCola(int n){
    FiboT(n,1,0);
}

int main() {
    std::cout << FibonacciPP(15);
    std::cout << FibonacciCola(15);
    return 0;
}

