#include <iostream> 

int matrixSum(int A[][3],int B[][3],int C[][3],int n,int col,int row){
    if(col < n){
        if( row < n){
            C[col][row] = A[col][row] + B[col][row];
            row++;
            matrixSum(A,B,C,n,col,row);
        }
        row=0;
        col++;
        matrixSum(A,B,C,n,col,row);
    } 
}

int main(){
    int A[3][3] = {{2,2,3},{4,5,6},{7,8,9}}; 
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int C[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    matrixSum(A,B,C,3,0,0);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << C[i][j]<< " ";
        }
        std::cout << "\n" ;
    }
    return 0;
}