#include <iostream>

using namespace std;
int main()
{
	char opsi;
	
	do
	{
	
	float berat, tinggi, hasiltinggi;
	char jenis;
	
	system("cls");
	
	cout << "Masukkan Berat Badan = ";
	cin >> berat;
	cout << "Masukkan Tinggi Badan = ";
	cin >> tinggi;
	
	hasiltinggi = tinggi-100;
	hasiltinggi = hasiltinggi-(hasiltinggi*0.1);
	
	if (berat - hasiltinggi <= 2 && berat - hasiltinggi >= -2) {
		cout << "\nBerat Anda Ideal" << endl;
		cout << "Berat Anda = " << berat << endl;
		cout << "Hasil Pengurangan Tinggi = " << hasiltinggi << endl;
	}else{
		cout << "\nBerat Anda Tidak Ideal" << endl;
		cout << "Berat Anda = " << berat << endl;
		cout << "Hasil Pengurangan Tinggi = " << hasiltinggi << endl;
	}
	
	cout << "\nApakah Anda Ingin Keluar ? " << endl;
	cout << "Ketik y atau n ";
	cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
