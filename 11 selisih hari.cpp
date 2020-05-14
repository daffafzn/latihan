#include <iostream> 

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		char hp[256], hk[256];
		int pertama, kedua, selisih;
		
		cout << "Masukkan Hari Pertama : ";
		cin >> hp;
		
		cout << "Masukkan Hari Kedua : ";
		cin >> hk;
		
		if (hp == string("senin")) {
			pertama = 1;
		}
		else if(hp == string("selasa")) {
			pertama = 2;
		}		
		else if(hp == string("rabu")) {
			pertama = 3;
		}
		else if(hp == string("kamis")) {
			pertama = 4;
		}
		else if(hp == string("jumat")) {
			pertama = 5;
		}
		else if(hp == string("sabtu")) {
			pertama = 6;
		}
		else if(hp == string("minggu")) {
			pertama = 7;
		}else{
			cout << "Masukkan Hari Yang Benar!\n";
		}
		
		if (hk == string("senin")) {
			kedua = 1;
		}
		else if(hk == string("selasa")) {
			kedua = 2;
		}		
		else if(hk == string("rabu")) {
			kedua = 3;
		}
		else if(hk == string("kamis")) {
			kedua = 4;
		}
		else if(hk == string("jumat")) {
			kedua = 5;
		}
		else if(hk == string("sabtu")) {
			kedua = 6;
		}
		else if(hk == string("minggu")) {
			kedua = 7;
		}else{
			cout << "Masukkan Hari Yang Benar!\n";
		}
		
		selisih = pertama - kedua;
		if (selisih < 0) {
			selisih = selisih * -1;
		}
		cout << "Selisih Hari Nya Adalah : " << selisih;
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
	
	}while(opsi == 'n' || opsi == 'N');
}
