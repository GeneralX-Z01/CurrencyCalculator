#include <iostream>
using namespace std;
//soru 3:
int main()
{
	while (true)
	{
		string devamTamam;
		string islemSecimi;
		cout << "Lutfen yapmak istediginiz islemi seciniz: almak (a) veya satmak (s): " << endl;
		cin >> islemSecimi;
		//alis veya satis secimi
		if (islemSecimi == "s")
		{
			string dovizCinsi;
			float miktar;
			cout << "hangi para cinsinden satis yapmak isterisniz? (euro, dolar, sterlin, frank)" << endl;
			cin >> dovizCinsi;
			cout << "ne kadar " << dovizCinsi << " satmak istersiniz>? " << endl;
			cin >> miktar;
			//euro satisi
			if (dovizCinsi == "euro")
			{
				if (miktar <= 1000)
					cout << miktar * 3.85 << " tlye takabul eder." << endl;

				else if (miktar <= 5000)
					cout << miktar * 3.89 << " tlye takabul eder. " << endl;

				else
					cout << miktar * 3.9 << " tlye takabul eder. " << endl;
			}
			//dolar satisi
			else if (dovizCinsi == "dolar")
			{
				if (miktar <= 1000)
					cout << miktar * 3.54 << " tlye takabul eder." << endl;

				else if (miktar <= 5000)
					cout << miktar * 3.57 << " tlye takabul eder. " << endl;

				else
					cout << miktar * 3.58 << " tlye takabul eder. " << endl;
			}
			//sterlin satisi
			else if (dovizCinsi == "sterlin")
			{
				if (miktar <= 1000)
					cout << miktar * 4.50 << " tlye takabul eder." << endl;

				else if (miktar <= 5000)
					cout << miktar * 4.57 << " tlye takabul eder. " << endl;

				else
					cout << miktar * 4.6 << " tlye takabul eder. " << endl;
			}
			//franksatisi
			else if (dovizCinsi == "frank")
			{
				if (miktar <= 1000)
					cout << miktar * 3.55 << " tlye takabul eder.." << endl;

				else if (miktar <= 5000)
					cout << miktar * 3.61 << " tlye takabul eder. " << endl;

				else
					cout << miktar * 3.67 << " tlye takabul eder. " << endl;
			}
			//farkli veri girilmisse
			else
				cout << "girmis oldugunuz doviz uzerine alis islemi yapmiyoruz.";
		}
		//doviz satis islemleri
		else if (islemSecimi == "a")
		{
			string dovizCinsi;
			float miktar;
			cout << "hangi para cinsine cevirmek istersiniz isterisniz? (euro, dolar, sterlin, frank)" << endl;
			cin >> dovizCinsi;
			cout << dovizCinsi << " icin ne kadar tl degiseceksiniz? " << endl;
			cin >> miktar;
			//euro satisi
			if (dovizCinsi == "euro")
			{
				if (miktar <= 1000)
					cout << miktar / 3.98 << " euro ala bilirsiniz." << endl;

				else if (miktar <= 5000)
					cout << miktar / 3.94 << " euro ala bilirsiniz. " << endl;

				else
					cout << miktar / 3.92 << " euro ala bilirsiniz. " << endl;
			}
			//dolar satisi
			else if (dovizCinsi == "dolar")
			{
				if (miktar <= 1000)
					cout << miktar / 3.68 << " dolar ala bilirsiniz." << endl;

				else if (miktar <= 5000)
					cout << miktar / 3.63 << " dolar ala bilirsiniz. " << endl;

				else
					cout << miktar / 3.62 << " dolar ala bilirsiniz. " << endl;
			}
			//sterlin satisi
			else if (dovizCinsi == "sterlin")
			{
				if (miktar <= 1000)
					cout << miktar / 4.7 << " sterlin ala bilirsiniz." << endl;

				else if (miktar <= 5000)
					cout << miktar / 4.66 << " sterlin ala bilirsiniz. " << endl;

				else
					cout << miktar / 4.62 << " sterlin ala bilirsiniz. " << endl;
			}
			//franksatisi
			else if (dovizCinsi == "frank")
			{
				if (miktar <= 1000)
					cout << miktar / 3.75 << " frank ala bilirsiniz." << endl;

				else if (miktar <= 5000)
					cout << miktar / 3.7 << " frank ala bilirsiniz. " << endl;

				else
					cout << miktar / 3.69 << " frank ala bilirsiniz. " << endl;
			}
			//farkli veri girilmisse
			else
				cout << "girmis oldugunuz doviz uzerine satis islemi yapmiyoruz.";

		}
		cout << "baska islem var mi (var/yok) ?" << endl;
		cin >> devamTamam;
		if (devamTamam == "var")
		{
			cout << " " << endl;
		}

		else if (devamTamam == "yok")
		{
			break;
		}
	}
}