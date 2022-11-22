#include <stdio.h>
#include <string.h>

typedef struct Peserta
{
	int Nomor;
	char Nama[50];
	int LamaWaktu;
}PESERTA;

const int N = 3;
PESERTA PesertaBalapSepeda[3];

void InputPeserta()
{
	int No;
	char Nama[50];
	int Waktu;
	int i;
	for( i = 0; i < N; i++)
	{
		printf("\n Input Peserta Ke - %d" ,i+1);
		printf("\n ====================================================\n");
		
		printf(" Masukkan Nomor Peserta   : ");
		fflush(stdin); scanf("%d",&No);
		
		printf(" Masukkan Nama Peserta    : ");
		fflush(stdin); gets(Nama);
		
		printf(" Masukkan Lama Waktu (Dalam Menit): ");
		fflush(stdin); scanf("%d" ,&Waktu);
		
		printf(" =========================Saif Adzzahabi===========================\n");
		
		PesertaBalapSepeda[i].Nomor = No;
		strcpy(PesertaBalapSepeda[i].Nama, Nama);
		PesertaBalapSepeda[i].LamaWaktu = Waktu;
		
	}
}

void Sort()
{
	
	PESERTA Temp;
	int i;
	for ( i = 0; i < N; i++)
	{
		int j;
		for (j = i+1; j < N; j++)
		{
			if (PesertaBalapSepeda[i].LamaWaktu > PesertaBalapSepeda[j].LamaWaktu)
			{
				Temp = PesertaBalapSepeda[i];
				PesertaBalapSepeda[i] = PesertaBalapSepeda[j];
				PesertaBalapSepeda[j] = Temp;
			}
		}	
	}
}
void HasilJuara()
{
	printf("\n Urutan Juara Berdasarkan Kecepatan Mencapai Finish : \n");
	int i;
	for(i = 0; i < N; i++)
	{
		printf("\n ====================================================");
		printf("\n Peserta Nomor 	= %d" ,PesertaBalapSepeda[i].Nomor);
		printf("\n Nama Peserta 	= %s" ,PesertaBalapSepeda[i].Nama);
		printf("\n Mencapai Finish Dalam : %d Menit.", PesertaBalapSepeda[i].LamaWaktu);
		printf("\n");
		printf("\n Peserta Mendapat JUARA Ke- %d.",i+1);
		printf("\n ====================================================");
		printf("\n");
	}
}
main()
{
	printf("\n ===>> Program Pertadingan Balap Sepeda <<===\n");
	InputPeserta();
	Sort();
	HasilJuara();
}

