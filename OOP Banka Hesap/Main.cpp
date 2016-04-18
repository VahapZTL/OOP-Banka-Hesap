#include <iostream>
#include <locale>
#include <string>
#include "Vadeli_Dizi.h"
#include "Vadesiz_Dizi.h"

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "turkish");
	int hesapTur, hesapIc�1, hesapIc�2, islemID1, islemID2, hesapSay1, hesapSay2, vade;
	double islemPara1, islemPara2;

	Vadeli_Dizi * vadeli = new Vadeli_Dizi();
	Vadesiz_Dizi * vadesiz = new Vadesiz_Dizi();

	while (true)
	{
		cout << "-Vadeli Hesapla i�lem yapmak i�in 2\n-Vadesiz hesap ile i�lem yapmak i�in 1\n-��kmak i�in 0'a bas�n.\n";
		cin >> hesapTur;
		if (hesapTur == 2)
		{
			while (true)
			{
				cout << "��lem Se�iniz.\n****************\n" << "1- Hesap Ekleme\t\t" << "2- Hesap Silme\t\t" << "3- Para Yatir\n" << "4- Para �ek\t\t" << "5- Bilgileri G�ster\t" << "6- Ana Men�\n";
				cin >> hesapIc�1;
				if (hesapIc�1 == 1)
				{
					cout << "Ka� Ki�il Hesap Tutacaks�n�z?\n";
					cin >> hesapSay1;
					vadeli->degerAl(hesapSay1);
				}
				else if (hesapIc�1 == 2)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Silinecek Hesab�n ID De�eri:\n";
						cin >> islemID1;
						vadeli->sil(hesapSay1, islemID1);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�1 == 3)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Para Yat�r�lacak Hesab�n ID De�eri:\n";
						cin >> islemID1;
						cout << "Yat�r�lacak Tutar� Girin:\n";
						cin >> islemPara1;
						cout << "Ka� Ay Vade �stiyorsunuz?\n";
						cin >> vade;
						vadeli->paraEkle(hesapSay1, islemID1, islemPara1, vade);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�1 == 4)
				{
					if (vadeli->hesapKontrol())
					{
						cout << "Para �ekilecek Hesab�n ID De�eri:\n";
						cin >> islemID1;
						cout << "�ekilecek Tutar� Girin:\n";
						cin >> islemPara1;
						vadeli->paraCek(hesapSay1, islemID1, islemPara1);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�1 == 5)
				{
					if (vadeli->hesapKontrol())
					{
						vadeli->goster();
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�1 == 6)
				{
					break;
				}
			}
		}
		else if (hesapTur == 1)
		{
			while (true)
			{
				cout << "��lem Se�iniz.\n****************\n" << "1- Hesap Ekleme\t\t" << "2- Hesap Silme\t\t" << "3- Para Yatir\n" << "4- Para �ek\t\t" << "5- Bilgileri G�ster\t" << "6- Ana Men�\n";
				cin >> hesapIc�2;
				if (hesapIc�2 == 1)
				{
					cout << "Ka� Ki�il Hesap Tutacaks�n�z?\n";
					cin >> hesapSay2;
					vadesiz->degerAl(hesapSay2);
				}
				else if (hesapIc�2 == 2)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Silinecek Hesab�n ID De�eri:\n";
						cin >> islemID2;
						vadesiz->sil(hesapSay2, islemID2);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�2 == 3)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Para Yat�r�lacak Hesab�n ID De�eri:\n";
						cin >> islemID2;
						cout << "Yat�r�lacak Tutar� Girin:\n";
						cin >> islemPara2;
						vadesiz->paraEkle(hesapSay2, islemID2, islemPara2);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�2 == 4)
				{
					if (vadesiz->hesapKontrol())
					{
						cout << "Para �ekilecek Hesab�n ID De�eri:\n";
						cin >> islemID2;
						cout << "�ekilecek Tutar� Girin:\n";
						cin >> islemPara2;
						vadesiz->paraCek(hesapSay2, islemID2, islemPara2);
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�2 == 5)
				{
					if (vadesiz->hesapKontrol())
					{
						vadesiz->goster();
					}
					else
					{
						cout << "��lem yap�lacak herhangi bir veri yok! \n";
					}
				}
				else if (hesapIc�2 == 6)
				{
					break;
				}
			}
		}
		else if (hesapTur == 0)
		{
			break;
		}
	}

	return 0;
}