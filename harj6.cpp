/****IIZ01010****
Harjoitus 6
Ryhm‰: IIO14S2
Tekij‰: Joel Kortelainen
Kuvaus: Ohjelma kysyy k‰ytt‰j‰lt‰ h‰nen lompakossaan olevan rahan m‰‰r‰‰ sek‰ lihapiirakan hintaa.
Jos k‰ytt‰j‰ll‰ on riitt‰v‰sti rahaa, ohjelma ilmoittaa h‰nen ostaneen yhden lihapiirakan ja kertoo
j‰ljell‰ olevan rahan m‰‰r‰n.
Versio 1.0
24.9.2014
*/

#include <iostream>
using namespace std;


void main()

{
	float cash;
	float price;

	cout << "How much money is in your wallet? \n";
		cin >> cash;
	cout << "How much is the meat pie? \n";
		cin >> price;

		if (cash >= price)
		{
			cout << "You just bought yourself a delicious meat pie!\n";
				cout << "There's now " << (cash - price) << "$ in your wallet. ";
		}
		else
		{
			cout << "You don't have enough money for a meat pie, sorry.. ";
		}
}

