/*
Nama    : Dwi Cahya Nurohim
NIM     : 20170801204
Teknik Informatika - Universitas Esa Unggul
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    menu:
    system("cls");
    int bil[15]={7,13,15,20,21,22,24,25,32,38,39,41,45,60,70};
	int pilihan, i, cari, n=15;
	bool ada=false;
    char ulang;
    
    cout<<"================== MENU =================="<<endl<<endl;
    cout<<"\t1. Sequential Search"<<endl;
    cout<<"\t2. Binary Search"<<endl;
    cout<<"\t3. Lihat Daftar Bilangan"<<endl<<endl;
    cout<<"=========================================="<<endl<<endl;
    cout<<"Masukkan Pilihan (1/2/3): ";
    cin>>pilihan;
    cout<<endl;
    
    if(pilihan==1)
    {
    	system("cls");
    	cout<<"============ Sequential Search ============"<<endl<<endl;
		cout<<"Masukan bilangan yang dicari : ";
		cin>>cari;
		for(i=0;i<n;i++)
		{
			if(cari==bil[i])
			{
				ada=true;
				break;
			}
		}
		if(ada)
			cout<<endl<<"=== Bilangan ditemukan pada indeks ke-"<<i+1<<" ===";
		else
			cout<<endl<<"======== Bilangan tidak ditemukan. ========";
    }
    else if(pilihan==2)
    {
    	system("cls");
		int awal=0, akhir=n-1, tengah=(awal+akhir)/2;
		cout<<"============== Binary Search =============="<<endl<<endl;
		cout<<"Masukan bilangan yang dicari : ";
		cin>>cari;
    	while(awal<=akhir)
    	{
    		tengah=(awal+akhir)/2;
    	    if(cari==bil[tengah])
    	    {
    	        ada=true;
    	        break;
    		}
			else if(cari>bil[tengah])
    	        awal=tengah+1;
    	    else
    	        akhir=tengah-1;
    	}
    	if(ada)
			cout<<endl<<"=== Bilangan ditemukan pada urutan ke-"<<tengah+1<<" ===";
		else
			cout<<endl<<"======== Bilangan tidak ditemukan. ========";
    }
    else if(pilihan==3)
    {
    	system("cls");
    	cout<<"============= Daftar Bilangan ============="<<endl<<endl;
    	for(i=0;i<n;i++)
    	{
    		cout<<bil[i]<<" ";
		}
		cout<<endl<<endl<<"===========================================";
	}
	else
    {
    	cout<<"Menu yang anda pilih salah, ketik apa saja untuk kembali.";
    	getch();
		system("cls");
       	goto menu;
	}
	
    cout<<endl<<endl<<endl;
    cout<<"Apakah ingin mengulang lagi? (y/n): ";
    cin>>ulang;
    
    if (ulang=='y'|| ulang=='Y')
    {
       system("cls");
       goto menu;
    }
    else
    {
		system("exit");
    } 
    return 0;
}
