/*
Nama: Dwi Cahya Nurohim
NIM	: 20170801204
Teknik Informatika - Universitas Esa Unggul
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int jumlahData, i;
	
	cout<<"\n============================= PROGRAM REKAPITULASI NILAI MAHASISWA ============================="<<endl;
	cout<<"\nJumlah Data\t: ";
	cin>>jumlahData;
	cout<<"\n-------------------------------"<<endl;
	
	int nilaiMahasiswa[jumlahData][3];
	string nama, dataMahasiswa[jumlahData][6];
	
	for (i=0;i<jumlahData;i++)
	{
		cout<<"Data ke\t\t: "<<i+1<<endl;
		cout<<"Nama Depan\t: ";
		cin>>dataMahasiswa[i][0];
		cout<<"Nama Belakang\t: ";
		cin>>dataMahasiswa[i][1];
		cout<<"Program Studi\t: ";
		cin>>dataMahasiswa[i][2];
		cout<<"NIM\t\t: ";
		cin>>dataMahasiswa[i][3];
		cout<<"Nilai UTS\t: ";
		cin>>nilaiMahasiswa[i][0];
		cout<<"Nilai UAS\t: ";
		cin>>nilaiMahasiswa[i][1];
	
		nilaiMahasiswa[i][2]=(nilaiMahasiswa[i][0]+nilaiMahasiswa[i][1])/2;		//Menghitung Rata-Rata
		if(nilaiMahasiswa[i][2]>=80)
			dataMahasiswa[i][4]="A", dataMahasiswa[i][5]="LULUS";
		else if(nilaiMahasiswa[i][2]>=70)
			dataMahasiswa[i][4]="B", dataMahasiswa[i][5]="LULUS";
		else if(nilaiMahasiswa[i][2]>=60)
			dataMahasiswa[i][4]="C", dataMahasiswa[i][5]="LULUS";
		else if(nilaiMahasiswa[i][2]>=50)
			dataMahasiswa[i][4]="D", dataMahasiswa[i][5]="TIDAK LULUS";
		else
			dataMahasiswa[i][4]="E", dataMahasiswa[i][5]="TIDAK LULUS";
		cout<<"-------------------------------"<<endl;
	}
	cout<<endl<<endl;
	//system("cls");
	
												/*KEPALA TABEL*/
	cout<<"-----------------------------------------------------------------------------------------------"<<endl;
	cout<<setiosflags(ios::left)<<setw(13)<<"No |";
	cout<<setiosflags(ios::left)<<setw(13)<<"Nama";
	cout<<setiosflags(ios::left)<<setw(16)<<"| Program |";
	cout<<setiosflags(ios::left)<<setw(8)<<"NIM";
	cout<<setiosflags(ios::left)<<setw(8)<<"| Nilai";
	cout<<setiosflags(ios::left)<<setw(8)<<"| Nilai";
	cout<<setiosflags(ios::left)<<setw(7)<<"| Rata";
	cout<<setiosflags(ios::left)<<setw(8)<<"| Grade";
	cout<<setiosflags(ios::left)<<setw(10)<<"| Keterangan"<<endl;
	cout<<setiosflags(ios::left)<<setw(26)<<"   |";
	cout<<setiosflags(ios::left)<<setw(24)<<"|  Studi  |";
	cout<<setiosflags(ios::left)<<setw(8)<<"|  UTS";
	cout<<setiosflags(ios::left)<<setw(8)<<"|  UAS";
	cout<<setiosflags(ios::left)<<setw(8)<<"| Rata |       |"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------"<<endl;
	
	for (i=0;i<jumlahData;i++)
	{
		nama=dataMahasiswa[i][0]+" "+dataMahasiswa[i][1];
		cout<<setw(5)<<setiosflags(ios::left)<<i+1;
		cout<<setw(25)<<setiosflags(ios::left)<<nama;						//Nama
		cout<<setw(8)<<setiosflags(ios::left)<<dataMahasiswa[i][2];			//Prodi
		cout<<setw(15)<<setiosflags(ios::left)<<dataMahasiswa[i][3];		//NIM
		cout<<setw(8)<<setiosflags(ios::left)<<nilaiMahasiswa[i][0]; 		//Nilai UTS
		cout<<setw(8)<<setiosflags(ios::left)<<nilaiMahasiswa[i][1];		//Nilai UAS
		cout<<setw(8)<<setiosflags(ios::left)<<nilaiMahasiswa[i][2];		//Rata-Rata
		cout<<setw(6)<<setiosflags(ios::left)<<dataMahasiswa[i][4];			//Grade
		cout<<setw(10)<<setiosflags(ios::left)<<dataMahasiswa[i][5]<<endl;	//Keterangan
	}
	cout<<"-----------------------------------------------------------------------------------------------"<<endl;
	
	getch();
	return 0;
}
