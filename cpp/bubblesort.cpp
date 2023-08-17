#include <iostream>
using namespace std;

void bubblesort(int array[],int size){
	int temp,f=1;
	for(int x=0;x<size && f==1;++x)
	{
		f=0;
		for(int y=0;y<size-x-1;++y)
		{
			if(array[y]>array[y+1])
			{
				temp=array[y];
				array[y]=array[y+1];
				array[y+1]=temp;
				f=1;
			}
		}
	}

	//print the sorted array
	for (int x=0;x<size;++x)
	{
		cout << array[x] << " " ;
	}
}

int main(){
	int array[5]={5,2,0,1,3},size=5;
	bubblesort(array,size);
	return 0;
}
