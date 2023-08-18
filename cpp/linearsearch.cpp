#include <iostream>
using namespace std;

int linearsearch(int array[],int size,int key){
	for(int x=0;x<size;++x){
		if(array[x]==key)
			return x;
	}
	return -999;
}

int main(){
	int array[]={5,2,1,3,0},size=5,key=0;
	int x=linearsearch(array,size,key);
	cout << x;
	return 0;
}
