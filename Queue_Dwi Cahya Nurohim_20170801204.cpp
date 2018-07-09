#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

typedef struct TNode{
	int data;
	TNode *next;
};
TNode *head;

void init()
{
	head=NULL;
}
int isEmpty()
{
	if(head==NULL)
		return 1;
	else
		return 0;
}
void insertDepan(int databaru)
{
	TNode *baru;
	baru=new TNode;
	baru->data=databaru;
	baru->next=NULL;
	if(isEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		baru->next=head;
		head=baru;
	}
	cout<<"   *Data Masuk!*";
}
void insertBelakang(int databaru)
{
	TNode *baru, *bantu;
	baru=new TNode;
	baru->data=databaru;
	baru->next=NULL;
	if(isEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		bantu=head;
		while(bantu->next!=NULL)
			bantu=bantu->next;
		bantu->next=baru;
	}
	cout<<"   *Data Masuk!*";
}
void hapusDepan()
{
	TNode *hapus;
	int d;
	if(isEmpty()==0)
	{
		if(head->next!=NULL)
		{
			hapus=head;
			d=hapus->data;
			head=head->next;
			delete hapus;
		}
		else
		{
			d=head->data;
			head=NULL;
		}
		cout<<"  *Data Terhapus!*"<<endl;
	}
	else
		cout<<" *Data Masih Kosong!*"<<endl;
}
void hapusBelakang()
{
	TNode *hapus, *bantu;
	int d;
	if(isEmpty()==0)
	{
		if(head->next!=NULL)
		{
			bantu=head;
			while(bantu->next->next!=NULL)
				bantu=bantu->next;
			hapus=bantu->next;
			d=hapus->data;
			bantu->next=NULL;
			delete hapus;
		}
		else
		{
			d=head->data;
			head=NULL;
		}
		cout<<"  *Data Terhapus!*"<<endl;
	}
	else
		cout<<" *Data Masih Kosong!*"<<endl;
}
void tampil()
{
	TNode *bantu;
	bantu=head;
	cout<<endl;
	if(isEmpty()==0)
	{
		while(bantu!=NULL)
		{
			cout<<bantu->data<<" ";
			bantu=bantu->next;
		}
		cout<<endl;
	}
	else
		cout<<" *Data Masih Kosong!*"<<endl;
}

int main()
{
	int pil, data;
	init();
	menu:
	system("cls");
	cout<<"PROGRAM ARRAY OF QUEUE "<<endl;
	cout<<"-------- MENU --------"<<endl;
	cout<<"1. Masukan Data "<<endl;
	cout<<"2. Hapus Data"<<endl;
	cout<<"3. Lihat Data"<<endl;
	cout<<"4. Exit Program "<<endl;
	cout<<"Pilih Menu [1/2/3/4]: ";	cin>>pil;
	
	if(pil==1)
	{
		int pilMsk;
		cout<<endl;
		cout<<"--- MENU INPUT DATA ---"<<endl;
		cout<<"1. Input Data Depan "<<endl;
		cout<<"2. Input Data Belakang"<<endl;
		cout<<"Pilih Menu [1/2]: ";	cin>>pilMsk;
		cout<<endl<<"Data\t: ";	cin>>data;
		if(pilMsk==1)
		{
			insertDepan(data);
		}
		else if(pilMsk==2)
		{
			insertBelakang(data);
		}
		getch();
		goto menu;
	}
	else if(pil==2)
	{
		int pilHps;
		cout<<endl;
		cout<<"--- MENU HAPUS DATA ---"<<endl;
		cout<<"1. Hapus Data Depan "<<endl;
		cout<<"2. Hapus Data Belakang"<<endl;
		cout<<"Pilih Menu [1/2]: ";	cin>>pilHps;
		if(pilHps==1)
		{
			hapusDepan();
		}
		else if(pilHps==2)
		{
			hapusBelakang();
		}
		getch();
		goto menu;
	}
	else if(pil==3)
	{
		tampil();
		getch();
		goto menu;
	}
}
