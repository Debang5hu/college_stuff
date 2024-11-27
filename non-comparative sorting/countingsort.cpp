//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int a[5] = {3,1,7,5,0}; //max:7

 //to find the maximum element of an array
int maxelement(int n){
    return *max_element(a,a + n);
}

// n = len of array and k = max element
void countsort(int n,int k){ 
    int count[k+1],output[n+1]; //plus 1

    for(int x=0;x<=k;++x) count[x]=0; //init 0

    for(int x=0;x<n;++x) count[a[x]]++; //counting frequency of elements

    for(int x=1;x<=k;++x) count[x]+=count[x-1]; //updating count 

    for(int x=n-1;x>=0;--x){ 
        output[count[a[x]] - 1]=a[x]; //building the output array
        count[a[x]]--;  //decrement the count
    }

    for(int x=0;x<n;++x) a[x]=output[x]; //copying the array
}

//printing
void print(int n){
    for(int x=0;x<n;++x) cout << a[x] << " ";
}

int main(){
    int n = sizeof(a)/sizeof(a[0]);
    int k = maxelement(n);
    countsort(n,k);
    print(n);
    return 0;
}