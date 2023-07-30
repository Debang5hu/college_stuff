#include <stdio.h>

int linear_search(int a[],int size,int element_to_be_search);

int main(){
	int array[5]={1,3,2,0,5},size=5;
	printf("%d",linear_search(array,size,0));
	return 0;
}


int linear_search(int a[],int size,int element_to_be_search){
        for(int x=0;x<size;++x){
                if(a[x]==element_to_be_search){
                        return x;
                }
        }
        return -1;
}
