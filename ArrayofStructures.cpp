/* 
 * ArrayofStructures.cpp
 *
 * Example for creation and usage of an array of structures.
 * 
 */
#include <iostream>
#include <iomanip>

using namespace std;
 
struct Book
{
	char Title[35];
	char Authors[50];
	char ISBN[20];
	char Publisher[20];
	int Year;
	float Price;
};
# define BookNumber 2


void main()
{
	Book B[BookNumber];

	for (int i = 0; i < BookNumber; ++i)
	{
		cout << "\nBook "<< right << setw(3) <<i+1<<"\n--------\n";
		cout << "Title: "; 
		cin.getline(B[i].Title, 35);
		cout << "Authors: ";
		cin.getline(B[i].Authors, 50);
		cout << "ISBN: ";
		cin.getline(B[i].ISBN, 20);
		cout << "Publisher: ";
		cin.getline(B[i].Publisher, 20);
		cout << "Year: ";
		cin >> B[i].Year;
		cout << "Price: ";
		cin >> B[i].Price;
		cin.ignore();
	}

	cout << "\n\nStored data\n-----------\n";
	for (int i = 0; i < BookNumber; ++i)
	{
		cout << "\nBook " << right << setw(3) << i + 1 << "\n--------\n";
		cout << "Title: " << B[i].Title << endl;
		cout << "Authors: " << B[i].Authors << endl;
		cout << "ISBN: " << B[i].ISBN << endl;
		cout << "Publisher: " << B[i].Publisher << endl;
		cout << "Year: " << B[i].Year << endl;
		cout << "Price: " << setw(6) << fixed << setprecision(2) << B[i].Price << endl << endl;
	}
	system("pause");
}

