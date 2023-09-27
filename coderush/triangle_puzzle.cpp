//coderush question(triangle puzzle)

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int triangle_name(int x1,int x2,int x3){
    if((x1==x2) && (x2==x3))    return 0;
    else if((x1==x2) || (x2==x3) || (x1==x3))   return 1;
    else   return 2;
}

int main(){
    int side1,side2,side3;
    cin >> side1 >> side2 >> side3;
	int tri=triangle_name(side1,side2,side3);
    if(tri==0){
        cout << "equilateral";
    }else if(tri==1){
        cout << "isosceles";
    }else{
        cout << "scalene";
    }
    return 0;
}