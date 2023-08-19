#include <iostream>
using namespace std;

int binsrh(int array[],int size,int key){
	int l=0,u=size-1,m=0;
	while(l<=u){
		m=(l+u)/2;
		if(m==key) return key;
		else if(key < m) u=m-1;
		else l=m+1;
	}
	return -1;
}

int main(){
	int array[5]={0,1,2,3,4},size=5;
	int val= binsrh(array,size,2);
	cout << val;
	return 0;
}
