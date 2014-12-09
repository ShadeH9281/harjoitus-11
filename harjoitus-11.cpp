//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int selection;
	cout << "Laskuri";
	cout << "\n************" << endl;
	cout << "\nAnna kaksi kokonaislukua ja valitse sen jalkeen valikosta niiden valilla \nsuoritettava laskutoimitus";
	cout << "\nAnna ensimmainen luku: ";
	cin >> luku1;
	cout << "\nAnna toinen luku: ";
	cin >> ws >> luku2;
	do {
		cout << "\n Valikko";
		cout << "\n ---------";
		cout << "\n 1. Summa";
		cout << "\n 2. Erotus";
		cout << "\n 3. Tulo";
		cout << "\n 4. Osamaara";
		cout << "\n 5. Jakojaannos";
		cout << "\n 6. Syota uudet luvut laskemista varten\n";
		cout << "\n Valintasi: ";
		cin >> ws >> selection;
		switch (selection)
		{
		default: cout << "\n Abbadon ship!\n";
			break;
		case 1: cout << "\nVastaus on " << (luku1 + luku2) << "\n";
			break;
		case 2: cout << "\nVastaus on " << (luku1 - luku2) << "\n";
			break;
		case 3: cout << "\nVastaus on " << (luku1 * luku2) << "\n";
			break;
		case 4: cout << "\nVastaus on " << (luku1 / luku2) << "\n";
			break;
		case 5: cout << "\nVastaus on " << (luku1 % luku2) << "\n";
			break;
		case 6: cout << "\nAnna kaksi kokonaislukua ja valitse sen jalkeen valikosta niiden valilla \nsuoritettava laskutoimitus";
			cout << "\nAnna ensimmainen luku: ";
			cin >> luku1;
			cout << "\nAnna toinen luku: ";
			cin >> ws >> luku2;
		}
	} while (selection != 0);





}