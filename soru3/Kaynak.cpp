#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2;
	int kontrol, kalan, kalan1;

	cout << " A ve B say�lar�n� giriniz : "; cin >> sayi1 >> sayi2; cout << endl;

	for (int i = 0; i <= sayi1; i++)
	{
		kalan1 = i % 2;
		if (kalan1 == 0)
		{
			cout << i << " �kiyte ta� B�l�n�r. " << endl;
		}
		else
		{

			cout << i << " �kiyte ta� B�l�nm�yor. " << endl;
		}
		kontrol = 1;
		for (int j = 2; j<i; j++)
		{
			kalan = i % j;
			if (kalan == 0)
			{
				kontrol = 2;

			}

		}
		if (kontrol == 2)
		{
			cout << i << "Asal say� de�ild�r . " << endl;

		}
		else
		{
			cout << i << "Asal say�d�r. " << endl;

		}
	}


	return 0;

}