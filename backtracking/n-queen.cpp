#include <iostream>
#define N 4
using namespace std;

int board[N+1]={0},col[N+1]={0},ld[2*N]={0},rd[2*N]={0};

void print(){for(int x=1;x<=N;++x) cout << board[x] << " ";}

int placequeen(int x);

/*int placequeen(int x){
    int j=1;
    while(j<=N){
        if(col[j] == 0 && ld[x+N-j] == 0 && rd[x+j-1] == 0){
            board[x] =j;
            col[j]=ld[x+N-j]=rd[x+j-1]=1;
            if(x==N) return 1;
            else{
                if(placequeen(x+1)==1) return 1;
            }
            board[x] = 0;
            col[j]=ld[x+N-j]=rd[x+j-1]=0;
        }
        ++j;
    }
    return 0;
}*/

int main(){
    placequeen(1);
    print();
    return 0;
}

int placequeen(int x){
    int j=1;
    while(j<=N){
        if(col[j]==0 && ld[x+N-j]==0 && rd[x+j-1]==0){
            board[x]=j;
            col[j]=ld[x+N-j]=rd[x+j-1]=1;
            if(x==N) return 1;
            else{
                if(placequeen(x+1) == 1 ) return 1;
            }
            board[x]=0;
            col[j]=ld[x+N-j]=rd[x+j-1]=0;
        }
    ++j;
    }
    return 0;
}