#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	
	printf("iterasi perpangkatan \n");
	int x,a,hasil=1;
	
	printf("masukkan angka ="); 
	scanf ("%d",&x);
	printf("masukkan pangkat ="); 
	scanf ("%d",&a);
	
	for (int i=0; i<a; i++)
		hasil =(x*a)*(x*a);	
	
	cout<<"hasil perpangkatan "<<x <<"^" <<a <<" =" <<hasil;
}
