#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	int data[15] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int end, top, src, flag=0;
	float pos;
	int pilih;
	
	end=0;
	top=14;
	
	printf("Data yang Dicari : ");
		scanf("%i",&src);
		int x;
do{
	pos=(float)((src-data[end])/(data[top]-data[end]))*(top-end)+end;
	x=floor(pos);
	if(data[x]==src){
		flag=1;
		break;
	}
	if(data[x]>src) top=x-1;
	else if(data[x]<src)
		end=x+1;
  }
  while(src>=data[end] && src<=data[top]);
  if(flag==1) printf("Data Tersedia Pada Indeks ke-%d",x);
  else printf("Data Tidak Tersedia");
  
	printf("\n\nTekan '1' untuk mengulangi program\n");
	printf("Tekan '0' untuk keluar\ntekan : ");
		scanf("%d",&pilih);
		
	if(pilih==1){
		system ("cls");
		main();
		
	}else
		exit(0);
	
	getch();
}
