#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		float total, nilai, diskon;
		
		cout << "Masukkan Total Belanja = ";
		cin >> total;
		
		if (total > 100000) {
			diskon = total * 0.1;
			total = total - diskon;
			cout << "\nAnda Mendapatkan Diskon Sebesar 10% Yaitu Rp." << diskon << endl;
			cout << "Total Pembayaran Anda Menjadi Rp." << total;
		}else{
			cout << "\nSayangnya Kamu Ngga Dapat Diskon :(" << endl;
			cout << "Total Pembayaran Anda Menjadi Rp." << total;
		}
						
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
