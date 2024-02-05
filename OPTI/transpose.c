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

void transpose(int matrix[][N],int result[][N]){
    for(int x = 0;x < N;++x){
        for(int y = 0;y< N;++y){
            result[x][y] = matrix[y][x];
        }
    }

    print(result);
}


int main(){
    
    // 3x3 matrix
    int matrix1[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    int result[N][N];

    printf("\n$> The Matrix is:\n");
    print(matrix1);
    printf("\n$> Transpose of the Matrix is:\n");
    transpose(matrix1,result);

    return 0;
}