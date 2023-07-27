#include <stdio.h>

//modified bubble sort
void bubble_sort(int a[],int size){
        int temp;
        int f=1;
        for(int x=0; x<size && f==1; ++x){
                f=0;
                for(int y=0; y<size-x-1; ++y){
                        if(a[y]>a[y+1]){
                                temp=a[y+1];
                                a[y+1]=a[y];
                                a[y]=temp;
                                f=1;
                        }
                }
        }
}

int main(){
	int array[5]={5,0,2,1,3};
	bubble_sort(array,5);

	//printing theh array
	for(int x=0;x<5;x++){
		printf("%d ",array[x]);
	}
}
