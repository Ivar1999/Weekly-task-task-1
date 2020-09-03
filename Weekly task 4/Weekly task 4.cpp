
#include <iostream>
#include <string>
using namespace std;

int favdrink;


int main()
{
	cout << "Hello user!\n\n";
	system("pause");
	system("cls");
	cout << "What is your favourite drink?\n\n1. Coffee\n2. Tea\n3. Coca Cola\n\nPlease select and enter 1, 2 or 3:";
	cin >> favdrink;
	cout << "\n";
	system("cls");
	if (favdrink == 1) {
		cout << "1. Coffee\tX\n2. Tea\n3. Coca Cola\n\nCoffee is delicious";
	}
	if (favdrink == 2) {
		cout << "1. Coffee\n2. Tea\t\t X\n3. Coca Cola\n\nTea gives peace of mind";
	}
	if (favdrink == 3) {
		cout << "1. Coffee\n2. Tea\n3. Coca Cola\t X\n\nGood choice, Coke is also my favourite!";
	}
	cout << "\n\n\n";
}