
#include <iostream>
#include <string>
using namespace std;

int age;

int main()
{
	cout << "Hello user!\n\n";
	system("pause");
	system("cls");
	cout << "Hello user!\n\nWhat is your age?\n";
	cin >> age;
	system("cls");
	if (age < 20) {
		cout << "You are young\n\n";
	}
	if (20 <= age && age <= 40) {
		cout << "You are a grown up\n\n";

}
	if (41 <= age && age <= 59) {
		cout << "You are old\n\n";
	}
	if (age > 60) {
		cout << "you ARE really old\n\n";
	}
	system("pause");
}