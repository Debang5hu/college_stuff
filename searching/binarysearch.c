#include <stdio.h>

//for binary search the list need to be sorted!

int binary_search(int array[],int size,int key){
	int l=0,u=size,m=0;
	while(l<=u){
		m=(l+u)/2;
		if (key==array[m]) return m;
		else if (key < array[m]) u=m-1;
		else l=m+1;
	}
	return -1;
}

int main(){
	int array[5]={1,2,3,4,5},size=5;
	printf("%d",binary_search(array,size,3));
	return 0;
}
