#include "Staff.h"

int main()
{
	Staff person;

	for (;;) {
		cout << "1. Insert\n";
		cout << "2. Print\n";
		cout << "3. Print field \n";
		cout << "4. Erase\n";
		cout << "5. Search\n";
		cout << "6. Exit\n";
		cout << "Enter a number:\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			person.insert();
			system("pause");
			system("cls");

			break;
		}
		case 2: {
			person.print();
			system("pause");
			system("cls");

			break;
		}
		case 3: {
			person.printField();
			system("pause");
			system("cls");

			break;
		}
		case 4: {
			person.print();
			person.erase();
			system("pause");
			system("cls");

			break;
		}
		case 5: {
			person.print();
			person.search();
			system("pause");
			system("cls");
			break;
		}
		case 6: {
			system("cls");
			exit(0);
			break;
		}
		}
	}
	return 0;
}