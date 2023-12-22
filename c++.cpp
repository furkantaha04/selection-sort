#include <string>
#include<string>
#include <iostream>
using namespace std;

int main()
{
	
int dizi[5];
int enKucuk, tutucu;              
for (int i = 0; i < 5; i++)
{
	cout << "lutfen sayı giriniz: ";  //select SORT
	cin >> dizi[i];
}

for (int l = 0; l < 5; l++) {
	enKucuk = dizi[l];
	for (int k = l+1; k < 5; k++)
	{
		if (enKucuk > dizi[k]) {

			enKucuk = dizi[k];
			tutucu = dizi[l];
			dizi[l] = dizi[k];
			dizi[k] = tutucu;
		}

	}
		cout << dizi[l] << endl;
}








		return 0;
}
	 





/*
	int dizi[] = { 7,15,35,65,75,72,89,92,23,46 };
	int tutucu;                                            //BUBLE SORT	
	for (int k = 0; k < 10; k++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (dizi[i] > dizi[i + 1])
			{
				tutucu = dizi[i];
				dizi[i] = dizi[i + 1];
				dizi[i + 1] = tutucu;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << dizi[i] << endl;
	}
{ */

/*
string x;                           //SANSÜRLEME ÖRNEĞİ
char gecici;
cout << "lutfen bir kelime giriniz: ";
cin >> x;

for (  int i = 0; i < x.length(); i++)
{
	gecici = x[i];

	if (gecici== 'a' ||gecici ==  'u' ||gecici== 'e' ||gecici== 'A' ||gecici== 'E' ||gecici== 'U' ||gecici== 'i' ||gecici== 'I'||gecici== 'o') {

		x[i] = '*';
	}

}
cout<<x<<endl;
*/