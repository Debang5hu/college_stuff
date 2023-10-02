#include <iostream>
using namespace std;

void mergesort(int a[],int lb,int mid,int ub){
    int i = lb,j = mid +1 ,temp[20],k=lb;
    while(i <= mid && j <= ub ){
        if(a[i] < a[j]){
            temp[k] = a[i];
            ++i;++k;
        }else{
            temp[k] = a[j];
            ++j;++k;
        }
    }

    while(i <= mid){
        temp[k] = a[i];
        ++i;++k;
    }

    while(j <= ub){
        temp[k] = a[j];
        ++j;++k;
    }


    //copying the array
    for(int z=lb;z <= ub;++z){
        a[z]=temp[z];
    }
}

void dividethearray(int a[],int lb,int ub){
    if(lb < ub){
        int mid = (lb + ub)/2;
        dividethearray(a,lb,mid);
        dividethearray(a,mid + 1,ub);
        mergesort(a,lb,mid,ub);
    }
}


int main(){
    int array[10] = {4,0,5,1,9,3,7,6,8,2};
    int sizeofarray = sizeof(array)/sizeof(array[0]);
    dividethearray(array,0,sizeofarray);

    //printing the array
    for(int x = 0;x < sizeofarray;++x){
        cout << array[x] << " ";
    }

    return 0;
}