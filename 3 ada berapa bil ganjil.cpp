#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		int n, total=0;
		
		cout << "Masukkan Jumlah Bilangan : ";
		cin >> n;
		
		if(n < 0){
			cout << "Masukkan Bilangan Positif !";
		}else{
			for(int i=1; i<=n; i++){
				if(i % 2 != 0){
					cout << i << endl;
					total = total + 1;
				}
			}
		}
		cout << "Bilangan Ganjilnya Ada : " << total;
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
