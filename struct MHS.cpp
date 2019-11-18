#include <iostream>
using namespace std;

struct mahasiswa{
	char nama[30];
	float IP;
	int SKS;
};

int main(){
	
	mahasiswa mhs[20][30];
	int jumlah, SKS, SKSt=0;
	float IPK, IPS =0;
	
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%i", &jumlah);
	
	printf("masukkan angka nilai dengan 4/3/2/1");
	for(int i=0; i<jumlah; i++){
		SKSt=0;
		fflush(stdin);
		printf("\nMasukkan nama Mahasiswa ke-%i : ", (i+1));
		gets(mhs[i][0].nama);
		for(int i=0; i<7; i++){
		switch(i){
			case 0 :
			cout<<"masukkan nilai ipa: ";
			cin>>mhs[i][i].IP;
			cout<<"masukkan sks mahasiswa: ";
			cin>>mhs[i][i].SKS;
			SKSt= SKSt+mhs[i][i].SKS;
			IPS=IPS+(mhs[i][i].IP*mhs[i][i].SKS);
			IPK = mhs[i][i].IP/mhs[i][i].SKS;
			break;
			case 1 :
			cout<<"masukkan nilai mtk: ";
			cin>>mhs[i][i].IP;
			cout<<"masukkan sks mahasiswa: ";
			cin>>mhs[i][i].SKS;
			SKSt= SKSt+mhs[i][i].SKS;
			IPS=IPS+(mhs[i][i].IP*mhs[i][i].SKS);
			IPK = mhs[i][i].IP/mhs[i][i].SKS;
			break;
			case 2 :
			cout<<"masukkan nilai pemweb: ";
			cin>>mhs[i][i].IP;
			cout<<"masukkan sks mahasiswa: ";
			cin>>mhs[i][i].SKS;
			SKSt= SKSt+mhs[i][i].SKS;
			IPS=IPS+(mhs[i][i].IP*mhs[i][i].SKS);
			IPK = mhs[i][i].IP/mhs[i][i].SKS;
	}
	mhs[i][0].SKS =SKSt;	
}
	
	IPK = mhs[i][i].IP/SKSt;
		printf("\nIPK : %f \n", IPK);	
		
}
 if (IPK <= 0) {
           printf ("E");
          }
          else if (IPK <= 1) {
           printf ( "D");
          }
          else if (IPK <= 2) {
            printf ("C");
          }
          else if (IPK <= 3) {
            printf ("B");
          }
          else if (IPK <= 4) {
            printf ("A");
          }

}
