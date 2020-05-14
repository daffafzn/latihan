#include <iostream>

using namespace std;
int main()
{
	char opsi;
	
	do
	{
	system("cls");
	
	float berat, tinggi, hasiltinggi;
	
	cout << "Masukkan Berat Badan = ";
	cin >> berat;
	cout << "Masukkan Tinggi Badan = ";
	cin >> tinggi;
	
	hasiltinggi = tinggi-100;
	hasiltinggi = hasiltinggi-(hasiltinggi*0.1);
	
	cout << "\nBerat Badan Yang Ideal Untuk Anda Adalah " << hasiltinggi;
	
	cout << "\n\nApakah Anda Ingin Keluar ?  " << endl;
	cout << "Ketik y atau n ";
	cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
