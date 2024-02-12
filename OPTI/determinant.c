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

int determinant(int matrix[][N],int result){
    for (int i = 0; i < 3; i++) {
        result = result + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }

    return result;
}

int main(){
    // 3x3 matrix
    int matrix[N][N] = {
        {1,0,-1},
        {0,0,1},
        {-1,-1,0}};

    int result = 0;

    printf("\n$> The Matrix is:\n");
    print(matrix);

    printf("\n$> Determinant of the Matrix is:\n");
    printf("\tΔ = %d",determinant(matrix,result));

    return 0;
}