
#include <iostream>
#include <string>
using namespace std;

string name;
int age;
string input;

int main()
{
	cout << "Name:";
	getline(cin, name);
	cout << "Age:";
	cin >> age;
	cout << "Do you drink coffee? Type yes/no:";
	cin >> input;
	if (input=="yes") {
		cout << "\nIt seems you like coffee\n\n\n\n";
	}
	else {
		cout << "\nOh you don't like coffee\n\n\n\n\n";
	}
	system("pause");
	system("cls");

	cout << "Your name is:" << name;
	cout << "\n\nYou are " << age << " years old\n\n";
	if (input == "yes") {
		cout << "Seems you like coffee\n\n\n\n";
	}
	else {
		cout << "Seems you don't like coffee\n\n\n\n";
	}


}