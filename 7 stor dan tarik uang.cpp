#include <iostream>
#include <math.h> 

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int pil;
		float total=0;
		do{	
			cout << "Pilih = \n0. Transfer\n1. Tarik\n2. Keluar\n";
			cin >> pil;
			
			switch(pil){
				case 0:
					float transfer;
					cout << "Masukkan Uang Untuk Transfer = ";
					cin >> transfer;
					
					total = total + transfer;
					
					cout << "\nSukses Transfer Senilai = " << transfer;
					cout << "\nSaldo Anda = " << total;
					break;
					
				case 1:
					float tarik;
					cout << "Masukkan Jumlah Uang Untuk Diambil = ";
					cin >> tarik;
					
					if(total > 10000){
						total = total - tarik;	
						cout << "\nAnda Berhasil Menarik Uang = " << tarik;
						cout << "\nSaldo Anda = " << total;
					}else{
						cout << "\nSaldo Anda = " << total;
						cout << "\nTotal Saldo Dibawah 10000, Anda Tidak Bisa Menarik Saldo Tersebut.";
					}
					break;
			}	
			cout << "\n================================\n";
		}while(pil != 2);
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
