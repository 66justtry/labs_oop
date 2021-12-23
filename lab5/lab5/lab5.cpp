#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Name_and_Address {
	string name;
	string address;
public:
	/*Name_and_Address(string x1, string x2) {
		name = x1;
		address = x2;
	}*/
	friend ostream& operator<< (ostream& out, const Name_and_Address& obj);
	friend istream& operator>> (istream& in, Name_and_Address& obj);
};

ostream& operator<< (ostream& out, const Name_and_Address& obj) {
	out << "Name: ";
	out << obj.name << endl;
	out << "Address: " << obj.address << endl;
	return out;
}

istream& operator>> (istream& in, Name_and_Address& obj) {
	in >> obj.name;
	getline(in, obj.address);
	return in;
}

int main() {
	Name_and_Address obj;
	ifstream in("text.txt");
	in >> obj;
	in.close();
	cout << obj;
	system("pause");
}