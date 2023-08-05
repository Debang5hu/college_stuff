#include <stdio.h>

//selection sort algorithm
void selection_sort(int x[],int size){
        for(int z=0;z<size-1;++z){
                int min_ele=z;
                for(int y=z+1;y<size;++y){
                        if(x[y]<x[min_ele]){
                                min_ele=y;
                        }
                        if(min_ele !=z){
                                int temp=x[z];
                                x[z]=x[min_ele];
                                x[min_ele]=temp;
                        }
                }
        }
	for(int a=0;a<5;++a){
		printf("%d ",x[a]);
	}
}

void main(){
	int array[5]={5,0,2,1,3};
	selection_sort(array,5);
}
