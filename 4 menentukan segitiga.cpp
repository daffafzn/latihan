#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		float a, b, c;
		
		cout << "Menentukan Jenis Segitiga ABC\n";
		cout << "Dengan Syarat A adalah Sisi Terpanjang\n\n";
		
		cout << "Masukkan sisi A :";
		cin >> a;
		cout << "Masukkan sisi B :";
		cin >> b;
		cout << "Masukkan sisi C :";
		cin >> c;
		
		if ((a*a) < (b*b) + (c*c)) {
			cout << "Maka ABC adalah Segitiga Lancip di A. Sisi A terletak dihadapan sudut A.";
		}else if((a*a) > (b*b) + (c*c)) {
			cout << "Maka ABC adalah Segitiga Tumpul di A.";
		}else{
			cout << "Maka ABC adalah Segitiga Siku-Siku di A.";
		}
       	
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
