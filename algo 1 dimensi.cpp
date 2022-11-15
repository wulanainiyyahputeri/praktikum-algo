#include <iostream>
using namespace std;

int main(){
	int jmlHari;
	cout <<"mengetahui pemasukkan penjualan selama berapa hari : ";
	cin>>jmlHari;
	int omset [jmlHari];
	int total;
	
	for (int b=0; b<jmlHari; b++){
		cout<<"omset hari ke- "<<b<<":";
		cin>>omset[b];
	}
	cout<<endl<<endl;
	cout<<"       OMSET PENJUALAN KERIPIK          "<<endl;
	cout<<"======================================= "<<endl;
	cout<<"Total hari : "<<jmlHari<<endl;
	for  (int a=0; a<jmlHari; a++){
		cout << "hari ke-" <<a<<" penjualan""= RP. "<<omset[a]<<endl;
		total +=omset [a];
	}
	cout<<endl;
	cout<<"Total Omset Penjualan Keripik selama" <<jmlHari<<" hari sebesar Rp. "<<total<<endl;	 
}

