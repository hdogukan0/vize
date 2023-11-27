#include <iostream>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Turkish");
	
	int* a;
	int* b;
	int c = 5;
	int d = 6;

	cout << "2 adet Sayý giriniz : "; cin >> c >> d; cout << endl;

	a = &c;
	b = &d;

	cout << "Sayýlar " << *a << " " << *b << endl;
	cout << "adresleri " << &d  << " " << &c << endl;


	return 0;

}