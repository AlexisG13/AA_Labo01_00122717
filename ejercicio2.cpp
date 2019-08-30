#include <iostream>

int Power(int x,int n){
    if(n>0){
        return x*Power(x,n-1);
    }
    else return 1;
}

int main(){
    std::cout<<Power(2,4);
    return 0;
}