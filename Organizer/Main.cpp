// Main.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;


/*
Electronic organizer:

- Notes : string { add, list, view, (optional: remove) }
- Contacts : Contact { add, list, view (optional: remove) }
*/

// Clone:
// https://github.com/mrshpot/CppCamp2016.git


struct Contact
{
	string name;
	string phone;

	Contact()
	{
	}

	Contact(const string &name, const string &phone)
		: name(name)
		, phone(phone)
	{
	}
};

class Organizer
{
public:
	size_t noteCount() const;
	void addNote(const string &note);
	void removeNote(size_t idx);
	const string getNote(size_t idx) const;

	size_t contactCount() const;
	void addContact(const Contact &contact);
	void removeContact(size_t idx);
	void getContact(size_t idx, Contact &outContact) const;
};

int main(int argc, char *argv[])
{
	return 0;
}
