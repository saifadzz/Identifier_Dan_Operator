#include <stdio.h>
#include <string.h>

typedef struct Peserta
{
	int Nomor;
	char Nama[50];
	float TinggiLompatan;
}PESERTA;

const int N = 3;

PESERTA PesertaLompatTinggi[3];

void InputPeserta()
{
	int No;
	char Nama[50];
	float Tinggi;
	int i;
	for(i= 0; i < N; i++)
	{
		printf("\n Input Peserta Ke - %d" ,i+1);
		printf("\n====================================================\n");
		
		printf(" Masukkan Nomor Peserta : ");
		fflush(stdin); scanf("%d",&No);
		
		printf(" Masukkan Nama Peserta  : ");
		fflush(stdin); gets(Nama);
		
		printf(" Masukkan Tinggi Lompatan :");
		fflush(stdin); scanf("%f" ,&Tinggi);
		
		printf("====================================================\n");
		
		PesertaLompatTinggi[i].Nomor = No;
		strcpy(PesertaLompatTinggi[i].Nama, Nama);
		PesertaLompatTinggi[i].TinggiLompatan = Tinggi;
	}
}

void Sort()
{
	printf("\n Urutan Peserta Berdasarkan Tinggi Lompatan : \n");
	
	PESERTA Temp;
	int i;
	for (i = 0; i < N; i++)
	{
		int j;
		for (j = i+1; j < N; j++)
		{
			if (PesertaLompatTinggi[i].TinggiLompatan < PesertaLompatTinggi[j].TinggiLompatan)
			{
				Temp = PesertaLompatTinggi[i];
				PesertaLompatTinggi[i] = PesertaLompatTinggi[j];
				PesertaLompatTinggi[j] = Temp;
			}
		}
		
		printf("\n====================================================");
		printf("\n Peserta Nomor 	 = %d" ,PesertaLompatTinggi[i].Nomor);
		printf("\n Nama Peserta 	 = %s" ,PesertaLompatTinggi[i].Nama);
		printf("\n Tinggi Lompatan = %g Meter" ,PesertaLompatTinggi[i].TinggiLompatan);
		printf("\n====================================================");
		printf("\n");	
	}
}

main()
{
	printf("\n ===>> Program Pertadingan Lompat Tinggi <<===\n");
	
	InputPeserta();
	Sort();
}

