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

void subtraction(int matrix1[][N],int matrix2[][N],int result[][N]){
    for(int x = 0;x < N;++x){
        for(int y = 0;y< N;++y){
            result[x][y] = matrix1[x][y] - matrix2[x][y];
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

    printf("\n$> After Subtracting the Matrices:\n");
    subtraction(matrix1,matrix2,result);

    return 0;
}
