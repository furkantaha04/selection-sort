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
	 
