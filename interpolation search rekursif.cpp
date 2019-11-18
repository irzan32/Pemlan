#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int ISearch(int src, int end, int top, int x, int data[]){
	
	x = (src-data[end])/(data[top]-data[end])*(top-end)+end;
		if(data[x] == src){
			return printf("index ke-%d",x);
	}
	else{
		if(x>top){
			return printf("Angka Tidak Tersedia");
		}
		else if(data[x]>src){
			top = x - 1;
			return ISearch(src, end, top, x, data); 
		}
		else if(data[x]<src){
			end = x + 1;
			return ISearch(src, end, top, x, data);
		}
	}
}


main(){
	int src,end=0,top=9,x;
	int data[10] ={3,4,9,8,10,110,17,18,19,2};
	
	int pilih;
	
	printf("3,4,9,8,10,110,17,18,19,2\n");
	printf("Masukkan Pencarian Data : ");
	scanf("%d",&src);
	ISearch(src, end, top, x, data);

	int tersedia=0;
	printf("\n\nTekan '1' mencoba lagi\n");
	printf("Tekan '0' keluar\ntekan : ");
		scanf("%d",&pilih);
	if(pilih==1){
				system ("cls");
		main();
		
	}else
		exit(0);
	
	getch();

}
