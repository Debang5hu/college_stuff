#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int partition(int a[],int beg,int end){
    int pivot,up = end,down = beg;
    pivot = (beg + end)/2;

    while(a[up] > a[pivot] && up > beg ) --up;
    while(a[down] < a[pivot] && down < end) ++down;

    if(down < up){
        int temp = a[down];
        a[down] = a[up];
        a[up] = temp;
    }

    return up;
}

void quicksort(int a[],int beg,int end){
    if(beg < end){
        int p = partition(a,beg,end);
        quicksort(a,beg,p-1);
        quicksort(a,p+1,end);
    }
}

int main(){
    int array[MAX] = {5,9,2,6,7,0,3,1,8,4};
    int n  = sizeof(array)/sizeof(array[0]);
    quicksort(array,0,n-1);

    //printing stuff
    for(int x=0;x<n;++x){
        cout << array[x] << ' ';
    }

    return 0;
}