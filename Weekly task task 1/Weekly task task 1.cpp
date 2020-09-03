
#include <iostream>
#include <string>
using namespace std;

string name;
char I;
int age;
long pn;
string birthday;


int main()
{
    cout << "-------------------------\n";
    cout << "| Name      |";
    getline(cin, name);
    cout << "| Initial   |";
    cin >> I;
    cout << "| Age       |";
    cin >> age;
    cout << "| Phone num |";
    cin >> pn;
    cout << "| Birthday  |";
    cin >> birthday;
    cout << "-------------------------\n";
    system("pause");
    
}
