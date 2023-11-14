#include <iostream>
#include <cstring>
using namespace std;

string s1 = "PQRSTPQRS";
string s2 = "PRATPBRQRPS";

int max(int a,int b){
    return (a>b)? a:b;
}

int lcs(int n,int m){
    if(n == 0 || m == 0) return 0;
    else if(s1[n-1] == s2[m-1]) return 1 +lcs(n-1,m-1);
    else return max(lcs(n,m-1),lcs(n-1,m));
}

int main(){
    int n = s1.size();
    int m = s2.size();
    cout << lcs(n,m) << endl;
    return 0;
}