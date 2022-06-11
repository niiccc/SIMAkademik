#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matakuliah.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<matakuliah> recMatkul;

	int menu_terpilih,idMahasiswa=0,idDosen=0,idTendik=0,idMatkul=0;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tambah Mata Kuliah" << endl;
		cout << "  5. Tampilkan semua Mahasiswa" << endl;
		cout << "  6. Tampilkan semua Dosen" << endl;
		cout << "  7. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  8. Tampilkan semua Mata Kuliah" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
				idMahasiswa++;
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk,semesterke,skslulus;
				id = "Mhs" + to_string(idMahasiswa);
				cout<<"Nama mahasiswa:";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir:";
				cin>>dd;
				cout<<"bulan lahir	:";
				cin>>mm;
				cout<<"tahun lahir	:";
				cin>>yy;
				cout<<"nrp			:";
				cin>>nrp;
				cout<<"departemen	:";
				cin>>departemen;
				cout<<"tahun masuk	:";
				cin>>tahunmasuk;
				cout<<"semester yang sedang berlangsung	:";
				cin>>semesterke;
				cout<<"jumlah sks yang telah lulus		:";
				cin>>skslulus;
				mahasiswa dataMahasiswa= mahasiswa (id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
				break;
			}
			case 2:{
				idDosen++;
				string id,nama,npp,departemen,pendidikan;
				int dd,mm,yy;
				id="Dosen"+to_string(idDosen);
				cout<<"Nama dosen	:";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir:";
				cin>>dd;
				cout<<"bulan lahir	:";
				cin>>mm;
				cout<<"tahun lahir	:";
				cin>>yy;
				cout<<"npp			:";
				cin>>npp;
				cout<<"departemen	:";
				cin>>departemen;
				cout<<"pendidikan	:";
				break;
			}
			case 3:{
				idTendik++;
				string id,nama,npp,unit;
				int dd,mm,yy;
				id="Tendik"+to_string(idTendik);
				cout<<"Nama tenaga kependidikan	:";
				cin.ignore();
				getline(cin,nama);
				cout<<"tanggal lahir:";
				cin>>dd;
				cout<<"bulan lahir	:";
				cin>>mm;
				cout<<"tahun lahir	:";
				cin>>yy;
				cout<<"npp			:";
				cin>>npp;
				cout<<"unit			:";
				cin>>unit;
				break;
			}
			case 4:{
				idMatkul++;
				string id,namaMatkul,kodeMatkul;
				int sksMatkul,semMatkul;
				id="Matkul"+to_string(idMatkul);
				
				cout<<"Ketik nama Mata kuliah:";
				cin>>namaMatkul;
				cout<<"Ketik kode Mata Kuliah:";
				cin>>kodeMatkul;
				cout<<"Ketik jumlah sks Mata Kuliah	:";
				cin>>sksMatkul;
				cout<<"Semester pada Mata kuliah yang ingin ditambahkan	:";
				cin>>semMatkul;
			}
			case 5:{
				for (int i = 0; i < idMahasiswa; i++)
				{
					cout<<"nama			:"<<recMhs[i].getNama()<<endl;
					cout<<"tanggal lahir:"<<recMhs[i].getTglLahir()<<"/"<<recMhs[i].getBulanLahir()<<"/"<<recMhs[i].getTahunLahir()<<endl;
					cout<<"nrp			:"<<recMhs[i].getNrp()<<endl;
					cout<<"departemen	:"<<recMhs[i].getDepartemen()<<endl;
					cout<<"tahun masuk	:"<<recMhs[i].getTahunMasuk()<<endl;
					cout<<"semester yang sedang berlangsung	:"<<recMhs[i].getSemester()<<endl;
					cout<<"jumlah sks yang telah lulus		:"<<recMhs[i].getSKSLulus()<<endl;
				}
				break;
			}
			case 6:{
				for (int i = 0; i < idDosen; i++)
				{
					cout<<"nama			:"<<recDosen[i].getNama()<<endl;
					cout<<"tanggal lahir:"<<recDosen[i].getTglLahir()<<"/"<<recDosen[i].getBulanLahir()<<"/"<<recDosen[i].getTahunLahir()<<endl;
					cout<<"npp			:"<<recDosen[i].getNpp()<<endl;
					cout<<"departemen	:"<<recDosen[i].getDepartemen()<<endl;
					cout<<"pendidikan	:"<<recDosen[i].getPendidikan()<<endl;
				}
				break;
			}
			case 7:{
				for (int i = 0; i < idTendik; i++)
				{
					cout<<"nama			:"<<recTendik[i].getNama()<<endl;
					cout<<"tanggal lahir:"<<recTendik[i].getTglLahir()<<"/"<<recTendik[i].getBulanLahir()<<"/"<<recTendik[i].getTahunLahir()<<endl;
					cout<<"npp			:"<<recTendik[i].getNpp()<<endl;
					cout<<"unit			:"<<recTendik[i].getUnit()<<endl;
				}
				
				
				break;
			}
			case 8:{
				for (int i = 0;i < idMatkul; i++)
				{
					cout<<"nama mata kuliah:"<<recMatkul[i].getNamaMatkul()<<endl;
					cout<<"kode mata kuliah:"<<recMatkul[i].getKodeMatkul()<<endl;
					cout<<"jumlah sks mata kuliah:"<<recMatkul[i].getSksMatkul()<<endl;
					cout<<"semester pada mata kuliah yang ingin ditambahkan:"<<recMatkul[i].getSemMatkul()<<endl;
				}
			}
	}

	return 0;
}
