#include <iostream>

using namespace std;
int main()
{
	char opsi;
	do
	{
		system("cls");
		
		struct {
			int hari, bulan, tahun;
		} pertama, kedua;
		
		struct {
			int hari, bulan, tahun;
		} selisih;
		cout << "Selisih Hari V.2\n";
		cout << "Syarat : Tahun Nya Harus Berurutan. Contoh Dari Tanggal 201015 Ke 201018.";
		cout << "\n\nMasukkan Tanggal Pertama (dd:mm:yy) \n\n";
		cout << "Hari = ";
		cin >> pertama.hari;
		cout << "Bulan = ";
		cin >> pertama.bulan;
		cout << "Tahun = ";
		cin >> pertama.tahun;
		
		cout << "\n\nMasukkan Tanggal Kedua (dd:mm:yy) \n\n";
		cout << "Hari = ";
		cin >> kedua.hari;
		cout << "Bulan = ";
		cin >> kedua.bulan;
		cout << "Tahun = ";
		cin >> kedua.tahun;
		
		int batasbulan=12, awalbulan=pertama.bulan, akhirbulan=kedua.bulan, awaltahun=pertama.tahun, akhirtahun=kedua.tahun, total=0;
		
		if (pertama.tahun <= kedua.tahun) {
			while(pertama.tahun <= kedua.tahun){
				if(pertama.bulan == 13){
					pertama.bulan = 1;
				}
				
				if (pertama.tahun == kedua.tahun){
					batasbulan = kedua.bulan;
				}
				
				for(pertama.bulan;pertama.bulan <= batasbulan;pertama.bulan++){	
					if (pertama.tahun == kedua.tahun){
						if (pertama.bulan == akhirbulan){
							total = total + kedua.hari;
							goto beresBro;
						}	
					}
					if(pertama.bulan % 2 == 0) {
						if(pertama.bulan == awalbulan){
							if(pertama.bulan % 2 == 0) {
								if(pertama.bulan == 2 && pertama.tahun % 4 == 0){
									total = total + (29 - pertama.hari);
								}else if(pertama.bulan == 2){
									total = total + (28 - pertama.hari);
								}else if(pertama.bulan == 8){
									total = total + (31 - pertama.hari);
								}else{
									total = total + (30 - pertama.hari);
								}
							}else{
								total = total + (31 - pertama.hari);
							}
						}else if(pertama.bulan == 2 && pertama.tahun % 4 == 0){
							total = total + 29;
						}else if(pertama.bulan == 2){
							total = total + 28;
						}else if(pertama.bulan == 8){
							total = total + 31;
						}else{
							total = total + 30;
						}
					}else{
						if(pertama.bulan == awalbulan){
							total = total + (31 - pertama.hari);
						}else{
							total = total + 31;
						}
					}
					
					if(pertama.bulan == 12){
						awalbulan = 0;
					}
				}
				
				pertama.tahun++;
			}
		}
		beresBro:
		
		cout << "\nTotal Selisih Hari = " << total;
		
		cout << "\n\nApakah Anda Ingin Keluar ? " << endl;
		cout << "Ketik y atau n ";
		cin >> opsi;
		
	}while(opsi == 'n' || opsi == 'N');
}
