#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int uang, seribu, sisa_seribu, gope, sisa_gope, cepe, sisa_cepe, gocap, sisa_gocap, slawe;
		
		cout << "Masukkan Nilai Uang (Kelipatan 25) = ";
		cin >> uang;
		
		seribu = uang / 1000;
		sisa_seribu = uang % 1000;
		
		gope = sisa_seribu / 500;
		sisa_gope = sisa_seribu % 500;
		
		cepe = sisa_gope / 100;
		sisa_cepe = sisa_gope % 100;
		
		gocap = sisa_cepe / 50;
		sisa_gocap = sisa_cepe % 50;
		
		slawe = sisa_gocap / 25;
		
		cout << uang << " Setara Dengan " << endl << seribu << " buah Rp.1000 " << endl << gope << " buah Rp.500 " << endl <<  cepe << " buah Rp.100 " << endl <<  gocap << " buah Rp.50 " << endl <<  slawe << " buah Rp.25 ";
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
