#include <stdio.h>
# define N 3

void print(int result[][N]){
    for(int x = 0;x < N;++x){
        for(int y = 0;y< N;++y){
            printf("%5d",result[x][y]);
        }
        printf("\n");
    }
}

void multiply(int matrix1[][N],int matrix2[][N],int result[][N]){
    int sum;
    for(int x=0;x<N;++x){
        for(int y=0;y<N;++y){
            sum = 0;
            for(int z=0;z<N;++z){
                sum += matrix1[x][z] * matrix2[z][y];
                result[x][y] = sum;
            }
        }
    }
    print(result);
}

int main(){
    //3x3 matrix
    int matrix1[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    
    //3x3 matrix
    int matrix2[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    
    int result[N][N];

    printf("\n$> The Matrix1 is:\n");
    print(matrix1);

    printf("\n$> The Matrix2 is:\n");
    print(matrix2);

    printf("\n$> After Multiplication:\n");
    multiply(matrix1,matrix2,result);

    return 0;
}