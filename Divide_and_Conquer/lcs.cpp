#include <iostream>
#include <string>
using namespace std;

string s1 = "PQRSTPQRS";
string s2 = "PRATPBRQRPS";
int m = s1.size();
int n = s2.size();

int max(int n,int m){
    return (n>m)? n:m;
}

int lcs(int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;++i) dp[i][0]=0;
    for(int j=0;j<=m;++j) dp[0][j]=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}

int main(){
    cout << lcs(m,n) << endl;
    return 0;
}
