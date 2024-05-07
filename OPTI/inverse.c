#include <stdio.h>
#define N 3


//           1
//  a^-1 =  ____[adj a]   
//          |a|


void adjoint(int mat[][N],int cf[][N],int adj[][N]){
    //cofactor + transpose
    
    // 00 01 02
    // 10 11 12
    // 20 21 22
    
    //cofactor()
    cf[0][0] = (mat[1][1] * mat[2][2]) - (mat[2][1] * mat[1][2]);
    cf[0][1] = (mat[1][0] * mat[2][2]) - (mat[2][0] * mat[1][2]);
    cf[0][2] = (mat[1][0] * mat[2][1]) - (mat[2][0] * mat[1][1]);
    
    cf[1][0] = (mat[0][1] * mat[2][2]) - (mat[2][1] * mat[0][2]);
    cf[1][1] = (mat[0][0] * mat[2][2]) - (mat[2][0] * mat[0][2]);
    cf[1][2] = (mat[0][0] * mat[2][1]) - (mat[2][0] * mat[0][1]);
    
    cf[2][0] = (mat[0][1] * mat[1][2]) - (mat[1][1] * mat[0][2]);
    cf[2][1] = (mat[0][0] * mat[1][2]) - (mat[1][0] * mat[0][2]);
    cf[2][2] = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);
    
    
    
    //transpose()
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            adj[i][j] = cf[j][i];
        }
    }
}


int determinant(int mat[][N]){
    int res = 0;
    for(int i=0;i<N;++i){
        res += mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[2][(i + 1) % 3] * mat[1][(i + 2) % 3]);
    }
    return res;
}


void inverse(int mat[][N],int cf[][N],int adj[][N]){
    int det = determinant(mat);
    
    if(det == 0){
        printf("Det is 0");
        return;
    }
    
    adjoint(mat,cf,adj);
    
    // printing the inverse
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            int element = (int)adj[i][j] / det;
            if ((i + j) % 2 != 0)
                element *= -1;
            printf("%3d",element);
        }
    printf("\n");
    }
    
    
}

int main(){
    int cf[N][N],adj[N][N];
    int mat[N][N] = {
        {0,2,3},
        {4,5,6},
        {7,8,9}};
        
    inverse(mat,cf,adj);
        
    return 0;
}
