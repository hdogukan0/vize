#include <iostream>
using namespace std;

int main()
{


	double m[10][10];
	
	for (int i = 10; i < 10; i++)
	{
		cout << i << "inci satýr " << endl;
		for (int j = 0; j<10; i++)
		{
			
			cin >> m[i][j];
		}
		cout << "\n";

	}
	// matris okundu

	double satir, sutun;
	satir = 0;
	sutun = 0;
	for (int k = 0; k < 10; k++)
	{
		satir = satir + m[k][k];
		sutun = sutun + m[k][9 - k];
	}


	cout << "Satir : " << satir << "\n";
	cout << "Sutun : " << sutun << "\n";



	return 0;
}