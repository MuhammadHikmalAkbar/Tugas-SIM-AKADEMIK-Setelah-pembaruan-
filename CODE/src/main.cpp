#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>


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

	int menu_terpilih;
	int dd, mm, yy, tahunmasuk, semesterke, skslulus;
	float ipsemester;
	long unsigned i;
	string nama, nrp, npp, departemen, pendidikan, unit, id;
	matakuliah Matkulsem1 = ("Matematika Dasar 1" , "Biologi 1" , "Fisika Dasar 1" , "Kimia Dasar 1" , "Dasar Pemrograman");
    matakuliah Matkulsem2 = ("Matematika Dasar 2" , "Biologi 2" , "Fisika Dasar 2" , "Kimia Dasar 2" , "Pemrograman Lanjutan");
    matakuliah Matkulsem3 = ("Matematika Dasar 3" , "Pengantar Teknologi Elektro" , "Javascript" , "Robotika" , "Fisika Dasar 3");
    matakuliah Matkulsem4 = ("Matematika Dasar 4" , "TechnoPreneur", "Rangkaian Listrik" , "Rangkaian Elekro" , "HTML");
    matakuliah Matkulsem5 = ("Metode Numerik" , "Lingkaran" , "IoT" , "Cloud Computing" , "Game Development");
    matakuliah Matkulsem6 = ("App Development" , "Magang" , "Mobile Computing");
    matakuliah Matkulsem7 = ("Robotika 2" , "Technopreneur 2" , "Fisika Kuantum");
    matakuliah Matkulsem8 = ("Mobile App" , "Listrik Daya Tinggi" , "Matematika Lanjutan");


	while(1) {
		
		system ("cls");
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
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. Exit program" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		system("cls"); 

		switch (menu_terpilih) {
			case 1:{
				system ("cls");
				cout << "ID : ";
				cin >> id; 
				cout << "Nama : ";
				getline (cin >> ws, nama);
				cout << endl;
				cout << "Tanggal lahir" << endl;
				cout << "     " << endl;
				cout << "Tanggal (dd) : ";
				cin >> dd;
				cout << "Bulan (mm) : ";
				cin >> mm;
				cout << "Tahun (yy) : ";
				cin >> yy;
				cout << endl;
				cout << "NRP : ";
				cin >> nrp;
				cout << "Departemen : ";
				getline (cin >> ws, departemen);
				cout << "Tahun Masuk : ";
				cin >> tahunmasuk;
				cout << "Semester ke- : ";
				cin >> semesterke;
				cout << "Jumlah sks lulus : ";
				cin >> skslulus;
				cout << "Ip Semester ";

				mahasiswa Mahasiswa (id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(Mahasiswa);
			}break;
			case 2:{
				system ("cls");
				cout << "ID : ";
				cin >> id;
				cout << "Nama : ";
				getline (cin >> ws, nama);
				cout << endl;
				cout << "Tanggal lahir" << endl;
				cout << "     " << endl;
				cout << "Tanggal (dd) : ";
				cin >> dd;
				cout << "Bulan (mm) : ";
				cin >> mm;
				cout << "Tahun (yy) : ";
				cin >> yy;
				cout << endl;
				cout << "Npp : ";
				cin >> npp;
				cout << "Departemen : ";
				getline (cin >> ws, departemen);
				cout << "Pendidikan : ";
				getline (cin >> ws, pendidikan);

				dosen Dosen (id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(Dosen);
				system ("cls");
			}break;
			case 3:{
				system ("cls");
				cout << "ID : ";
				cin >> id;
				cout << "Nama : ";
				getline (cin >> ws, nama);
				cout << endl;
				cout << "Tanggal lahir" << endl;
				cout << "     " << endl;
				cout << "Tanggal (dd) : ";
				cin >> dd;
				cout << "Bulan (mm) : ";
				cin >> mm;
				cout << "Tahun (yy) : ";
				cin >> yy;
				cout << endl;
				cout << "Npp : ";
				cin >> npp;
				cout << "Unit : ";
				getline (cin >> ws, unit);

				tendik Tendik(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(Tendik);
				system ("cls");
			}break;
			case 4:{
				for (unsigned i=0 ; i < recMhs.size() ; i++){
					system ("cls");
					cout << "	Mahasiswa " << i+1 << endl;
					cout << "ID Mahasiswa 		: " << recMhs[i].getId() << endl;
					cout << "Nama Mahasiswa 		: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recMhs[i].getTglLahir() << "," << recMhs[i].getBulanLahir() << "," << recMhs[i].getTahunLahir() << endl;
					cout << "NRP 			: " << recMhs[i].getNrp() << endl;
					cout << "Departemen 		: " << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk 		: " << recMhs[i].getTahunMasuk() << endl;
					cout << "Semester ke- 		: " << recMhs[i].getSemester() << endl;
					cout << "SKS lulus sebanyak	: " << recMhs[i].getSKSLulus() << endl;
					cout << "Mata Kuliah 		: " << endl;
					int xy = recMhs[i].getSemester;
					switch (xy)
					{
					case 1:
						Matkulsem1.printmatkul();
					break;
					case 2:
						Matkulsem2.printmatkul();
					break;
					case 3:
						Matkulsem3.printmatkul();
					break;
					case 4:
						Matkulsem4.printmatkul();
					break;
					case 5:
						Matkulsem5.printmatkul();
					break;
					case 6:
						Matkulsem6.printmatkul();
					break;
					case 7:
						Matkulsem7.printmatkul();
					break;
					case 8:
						Matkulsem8.printmatkul();
					break;
					default:
						break;
					}
					cout << endl;
					cin.ignore();
					cin.ignore();
				}
			}break;
			case 5:{
				for (unsigned i=0 ; i < recDosen.size() ; i++){
					system ("cls");
					cout << "		Dosen " << i+1 << endl;
					cout << "ID Dosen  		: " << recDosen[i].getId() << endl;
					cout << "Nama Dosen 	 	: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recDosen[i].getTglLahir() << "," << recDosen[i].getBulanLahir() << "," << recDosen[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recDosen[i].getNpp() << endl;
					cout << "Departemen 		: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan		: " << recDosen[i].getPendidikan() << endl;
					cout << endl;
					cin.ignore();
					cin.ignore();
				}
			}
			break;
			case 6:
			{
				for (unsigned i=0 ; i < recTendik.size() ; i++){
					system ("cls");
					cout << "	Tenaga Kependidikan  " << i+1 << endl;
					cout << "ID Tendik		: " << recTendik[i].getId() << endl;
					cout << "Nama Tenaga 	 	: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir 		: " << recTendik[i].getTglLahir() << "," << recTendik[i].getBulanLahir() << "," << recTendik[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recTendik[i].getNpp() << endl;
					cout << "Unit 			: " << recTendik[i].getUnit() << endl;
					cout << endl;
					cin.ignore();
					cin.ignore();
				}
			}
			break;
			case 7:
			{
				return 0;
			}
		}	
		
	}

	return 0;
}
