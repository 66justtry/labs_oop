#include "Staff.h"

Staff::Staff() {
    string names[15] = { "Scott", "Allison", "Stiles", "Derek", "Lydia", "Jackson",
          "Malia", "Kira", "Liam", "Noah", "Dean", "Jack", "Jimmy",
           "Bobby", "Jody" };
    for (int i = 0; i < 5; i++) {
        auto name = Person(names[rand() % 15]);
        auto age = Person(rand() % (45 - 15 + 1) + 15);
        this->personByName.insert
        (pair<Person, Person>(name, age));
        this->personByAge.insert
        (pair<Person, Person>(age, name));
    }
}

void Staff::insert() {

    string name;
    cout << "\nEnter name:\n";
    cin >> name;

    int age;
    cout << "\nEnter age:\n";
    cin >> age;
    auto pr = pair<Person, Person>(Person(name), Person(age));
    this->personByName.insert(pr);
    this->personByAge.insert(pr);
}

void Staff::print() {
    cout << "\nFirst Map\n";
    for (const auto& it : personByName) {
        cout << it.first << "  " << it.second << "\n";
    }
    cout << "\nSecond Map\n";
    for (const auto& it : personByAge) {
        cout << it.second << "  " << it.first << "\n";
    }
}

void Staff::printField() {
    int choice;
    cout << "\nPrint by\n";
    cout << "1. Name\n";
    cout << "2. Number\n";

    cin >> choice;

    if (choice == 1) {
        for (const auto& it : personByName) {
            cout << it.first << "\n";
        }
    }
    else {
        for (const auto& it : personByName) {
            cout << it.second << "\n";
        }
    }

}

void Staff::erase() {
    string eraseName;
    cout << "Enter name which you want to erase: ";
    cin >> eraseName;

    for (auto it = begin(personByName); it != end(personByName);) {
        if (eraseName == const_cast<Person&>(it->first).getName()) {
            it = personByName.erase(it);
        }
        else {
            it++;
        }
    }
}

void Staff::searchByName() {
    string searchName;
    cout << "Enter name which you want to find: ";
    cin >> searchName;

    for (auto it = begin(personByName); it != end(personByName); it++) {
        if (const_cast<Person&>(it->first).getName() == searchName) {
            cout << it->first << "  " << it->second << "\n";
        }
    }

}

void Staff::searchByAge() {
    int searchAge;
    cout << "Enter age which you want to find: ";
    cin >> searchAge;

    for (auto it = begin(personByAge); it != end(personByAge); it++) {
        if (const_cast<Person&>(it->first).getAge() == searchAge) {
            cout << it->second << "  " << it->first << "\n";
        }
    }

}

void Staff::search() {
    int choice;
    cout << "Search by\n";
    cout << "1. Name\n";
    cout << "2. Age\n";

    cin >> choice;

    if (choice == 1) {
        searchByName();
    }
    else if (choice == 2) {
        searchByAge();
    }
}