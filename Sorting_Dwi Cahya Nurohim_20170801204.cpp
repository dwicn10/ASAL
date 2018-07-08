#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int data[100],data2[200];	/*Deklarasi dua buah array.
							array data digunakan untuk menampung nilai input dari user.
							array data2 digunakan apabila ingin menggunakan data yg teracak lagi.*/
int n;
//Fungsi untuk menukar nilai dengan bantuan variabel t sebagai tempat sementara
void tukar(int a, int b)
{
	int t;
    t = data[b];
    data[b]=data[a];
    data[a]=t;
}
//Fungsi Bubble Sort
void bubble_sort()
{
    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if(data[j]<data[j-1]) tukar(j,j-1);		//Melakukan penukaran data
        }
    }
    cout<<"bubble sort selesai!"<<endl;
}
//Fungsi Exchange Sort
void exchange_sort()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=(i+1);j<n;j++)
        {
        	if(data[i]>data[j]) tukar(i,j);			//Melakukan penukaran data
        }          
    }
    cout<<"exchange sort selesai!"<<endl;
}
//Fungsi Selection Sort
void selection_sort()
{
    int pos,i,j;
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        for(int j=(i+1);j<n;j++)
        {
        	if(data[j]>data[pos]) pos=j;			
        }          
    	if(pos !=i) tukar(pos,i);					//Melakukan penukaran data
    }
    cout<<"selection sort selesai!"<<endl;
}
//Fungsi Insertion Sort
void insertion_sort()
{
    int temp,i,j;
    for(int i=0;i<n-1;i++)
    {
        temp=data[i];								//Proses penukaran data #1
    	j=i-1;
          
        while(data[j]>temp && j>=0)
        {
            data[j+1]=data[j];						//Proses penukaran data #2
            j--;   
        } 
    	data[j+1]=temp;     						//Proses penukaran data #3
    }         
    cout<<"selection sort selesai!"<<endl;
}
//Fungsi Quick Sort
void QuickSort(int L, int R)
{
    int i, j;
    int mid;
    i=L;
    j=R;
    mid=data[(L+R)/2];
    do
    {
    	while(data[i] < mid) i++;
    	while(data[j] > mid) j--;
    	if (i <= j)
    	{
            tukar(i,j);								//Melakukan penukaran data
            i++;
            j--;
    	};
    }
    while(i < j);
    if(L < j) QuickSort(L, j);
    if(i < R) QuickSort(i, R);
}
//Fungsi untuk menginput data ke dalam array
void Input()
{
    cout<<"Masukkan jumlah data = "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Masukkan data ke-"<<i+1<<" = "; cin>>data[i];
        data2[i]=data[i];											//Mengisi array data2 dengan nilai pada array data
    }
}
//Fungsi untuk menapilkan data yg ada di dalam array
void Tampil()
{
    cout<<"Data : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
//Fungsi untuk mengacak data di dalam array (Mengisi array data dengan nilai pada array data2)
void AcakLagi()
{
    for(int i=0;i<n;i++)
    {
        data[i]=data2[i];
    }
    cout<<"Data sudah teracak!"<<endl;
}

int main()
{
    int pil;
    system("cls");
    do
    {
		system("cls");								//Mengosongkan/membersihkan layar
		system("title Program Sorting Data");			//Memberi nama judul aplikasi
		//Menampilkan menu
		cout<<"----- Menu Sorting -----"<<endl;
		cout<<" 1. Input Data"<<endl;
		cout<<" 2. Bubble Sort"<<endl;
		cout<<" 3. Exchange Sort"<<endl;
		cout<<" 4. Selection Sort"<<endl;
		cout<<" 5. Insertion Sort"<<endl;
		cout<<" 6. Quick Sort"<<endl;
		cout<<" 7. Tampilkan Data "<<endl;
		cout<<" 8. Acak Data"<<endl;
		cout<<" 9. Exit"<<endl;
		cout<<"    Pilihan Anda = "; cin>>pil;
    	switch (pil)
    	{
			case 1:Input();break;					//Menjalankan fungsi Input
			case 2:bubble_sort();break;				//Menjalankan fungsi bubble_sort
            case 3:exchange_sort();break;			//Menjalankan fungsi exchange_sort 
            case 4:selection_sort();break;			//Menjalankan fungsi selection_sort
            case 5:insertion_sort();break;			//Menjalankan fungsi insertion_sort
            case 6:QuickSort(0,n-1);				//Menjalankan fungsi quick_sort
            cout<<"quick sort selesai"<<endl;
            break;
            case 7:Tampil();break;					//Menjalankan fungsi Tampil
            case 8:AcakLagi();break;				//Menjalankan fungsi AcakLagi
    	}
    	getch();
    }
    while(pil!=9);									//Melakukan perulangan jika input untuk variabel pil bukan 9
}
