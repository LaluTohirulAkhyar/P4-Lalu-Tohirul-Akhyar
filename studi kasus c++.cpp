#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y){
	COORD k={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);
	
}

int main()
{
	
	int a,b,c,d,e,f;
	float styl[50],wajah[50], sikap[50], tinggi[50];
	int absen[50],G,H,I,J,K[50],L,M,N,O;
	char g,mutu,nama[100];
	string predikat;
	
	
	awal:
	system ("cls");
	cout<<"Nama:LALU TOHIRUL AKHYAR\n";
	cout<<"NIM :F1B019081\n";
	cout<<"Kelompok:17\n\n\n";
	cout<<"PROGRAM PENILAIAN ASISTEN PRAKTIKUM ALPROG 2020 "<<endl;
	cout<<"=========================================================\n\n";
	cout<<"Masukkan Persentase WAJAH : ";cin>>a;
	cout<<"Masukkan Persentase TINGGI BADAN   : ";cin>>b;
	cout<<"Masukkan Persentase STYLE BAJU     : ";cin>>c;
	cout<<"Masukkan Persentase STYL RAMBUT    : ";cin>>d;
    cout<<"Masukkan Persentase SIKAP      : ";cin>>e;
    f=a+b+c+d+e;


if(f>100)
 {cout<<"Maaf,Standard Nilai Yang Anda Masukkan Lebih dari 100%\n";
 cout<<"Apakah Anda Ingin Mengulangi ??? ";cin>>f;
 if(g=='Y'||'y')
 goto awal;
 else exit;}
 {if (f<=100)
 cout<<"Standard Nilai Anda Sudah Mencapai "<<f<<" %"<<endl;}
cout<<"====================================================\n";
cout<<"Masukkan PERTEMUAN DENGAN ASISTEN : ";cin>>L;
cout<<"====================================================\n";
cout<<"Masukkan Jumlah ASISTEN YANG DISELEKSI : ";cin>>M;
cout<<endl;
cout<<" |====|===================|===========|======|=======|======|=====|=====|=======|==========|============|\n";
cout<<" | No.|  Nama ASISTEN     | PERCOBAAN |wajah | sikap | styl |tinggi  NA | Grade |santun    |  Predikat  |\n";
cout<<" |====|===================|===========|======|=======|======|=====|=====|=======|==========|============|";
for(N=1;N<=M;N++)
{gotoxy(1,21+N);cout<<"|"<<N<<"   |                   |           |      |       |      |     |     |       |          |            |"<<endl;
gotoxy(8,21+N);cin>>nama;cout<<endl;
gotoxy(32,21+N);cin>>absen[N];
gotoxy(40,21+N);cin>>wajah[N];
gotoxy(48,21+N);cin>>sikap[N];
gotoxy(55,21+N);cin>>styl[N];
gotoxy(62,21+N);cin>>tinggi[N];

  G=(absen[N]/100)*a;
  H=(wajah[N]/100)*b;
  I=(sikap[N]/100)*c;
  J=(styl[N]/100)*d;
  O=(tinggi[N]/100)*e;
  K[N]=G+H+I+J+O;
  
  {if(K[N]>=80)
  mutu='A';
  else if(K[N]>=67)
  mutu='B';
  else if(K[N]>=55)
  mutu='C';
  else if(K[N]>=45)
  mutu='D';
  else
 mutu='E';
 gotoxy(76,21+N);cout<<mutu;}
 
 {if(K[N]>=45)
  predikat="ganteng";
  else 
 predikat="standar";
 gotoxy(93,21+N);cout<<predikat;
 }
gotoxy(68,21+N);cout<<K[N];
gotoxy(86,21+N);cout<<L<<endl;
}

getch();}

