#include <iostream>
#include <algorithm>
using namespace std;

int a[8] = {3,1,7,5,0,1,100,50};

int max(int n){
    return *max_element(a,a+n);
}

void countingsort(int n,int pos){
    int count[10],out[n+1];

    for(int x=0;x<10;++x) count[x]=0; //init 0

    for(int x=0;x<n;++x) count[(a[x]/pos) % 10]++;    //count[a[x]]++  

    for(int x=1;x<10;++x) count[x] += count[x-1];

    for(int x=n -1 ;x>=0;--x) out[--count[(a[x]/pos) % 10]] = a[x];  //out[--count[a[x]]] = a[x]

    for(int x=0;x<n;++x) a[x] = out[x];
}

void radixsort(int n){
    int k = max(n); //max val

    for(int pos = 1;k/pos > 0;pos*=10){
        countingsort(n,pos);
    }
}

void print(int n){
    for(int x=0;x<n;++x) cout << a[x] << " ";
}

int main(){
    int n = sizeof(a)/sizeof(a[0]);
    radixsort(n);
    print(n);
    return 0;
}