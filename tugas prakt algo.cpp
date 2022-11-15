#include <iostream>
using namespace std;


int main(){
	int  i, j, m, n, matriksPertama[10][10], matriksKedua[10][10], hasil[10][10];
	
	cout <<"masukkan total baris matriks: ";
	cin >>m;
	cout <<"masukkan total kolom matriks: ";
	cin>>n;
	cout <<"masukkan bagian dari matriks pertama : ";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin >> matriksPertama[i][j];
		}
	}
	cout <<"masukkan bagian dari matriks kedua:\n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin >> matriksKedua[i][j];
		}
    }
	 cout <<"hasil dari penjumlahan matriks: \n";
	 for(i=0; i<m; i++)
	 {
	 	for(j=0; j<n; j++){
	 		hasil[i][j] = matriksPertama[i][j]+matriksKedua[i][j];
	 		cout<<hasil[i][j]<<"t";
		 }
		 cout <<endl;
	 }
	 
	return 0;
}
	
	
