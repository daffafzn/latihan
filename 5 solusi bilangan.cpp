#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int x, y, z,i;
		
		cout << "Solusi Bilangan Bulat Tidak Negatif : x + y + z = 25\n";
		
			if(i==0){
				x = 25/3;
				y = 25/3;
				z = (25/3) + (25%3);
				cout << "\nSolusi Pertama = \n\n";
				cout << "\nx adalah = " << x;
				cout << "\ny adalah = " << y;
				cout << "\nz adalah = " << z;
			}else if(i==1){
				x = 25/3;
				y = (25/3) + (25%3);
				z = 25/3;
				cout << "\n\nSolusi Kedua = \n\n";
				cout << "\nx adalah = " << x;
				cout << "\ny adalah = " << y;
				cout << "\nz adalah = " << z;
			}else{
				x = (25/3) + (25%3);
				y = 25/3;
				z = 25/3;
				cout << "\n\nSolusi Ketiga = \n\n";
				cout << "\nx adalah = " << x;
				cout << "\ny adalah = " << y;
				cout << "\nz adalah = " << z;
			}				
		
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
