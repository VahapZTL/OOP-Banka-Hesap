#include "Vadeli_Dizi.h"

Vadeli_Dizi::Vadeli_Dizi()
{
	dizi = NULL;
}

void Vadeli_Dizi::degerAl(int sayi)
{
	gosterr = sayi;
	dizi = new Hesap*[sayi];

	for (int i = 0; i < gosterr; i++)
	{
		dizi[i] = new Vadeli();
	}
	for (int i = 0; i < gosterr; i++)
	{
		cout << "Elemanlarý Girin(ID, Bakiye, Oran, Ad Soyad): \n";
		cin >> (Vadeli *)(dizi[i]);
	}
}

void Vadeli_Dizi::sil(int a, int silID)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			if (((Vadeli *)dizi[i])->idDeger(silID))
			{
				delete dizi[i];
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadeli_Dizi::paraEkle(int a, int ekleID, double gelenPara, int vade)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			int id2;

			id2 = ((Vadeli *)dizi[i])->idDeger(ekleID);

			if (id2 != 0)
			{
				((Vadeli *)dizi[i])->paraYatir(gelenPara, vade);
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadeli_Dizi::paraCek(int a, int cekID, double cekilenPara)
{
	if (dizi != NULL)
	{
		for (int i = 0; i < a; i++)
		{
			int id2;
			double para2;

			id2 = ((Vadeli *)dizi[i])->idDeger(cekID);

			if (id2 != 0)
			{
				para2 = ((Vadeli *)dizi[i])->paraMiktari();

				if (cekilenPara <= para2)
				{
					((Vadeli *)dizi[i])->paraCek(cekilenPara);
				}
				else
				{
					cout << "Bakiyeniz Yeterli Deðil!\n";
				}
			}
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

void Vadeli_Dizi::goster()
{
	if (dizi != NULL)
	{
		for (int i = 0; i < gosterr; i++)
		{
			cout << (Vadeli *)(dizi[i]);
		}
	}
	else
	{
		cout << "Herhangi bir veri bulanamadý!\n";
	}
}

bool Vadeli_Dizi::hesapKontrol()
{
	if (dizi != NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


Vadeli_Dizi::~Vadeli_Dizi()
{
	if (dizi != NULL)
	{
		delete[] dizi;
	}
}
