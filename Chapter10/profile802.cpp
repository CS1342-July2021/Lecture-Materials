#include <iostream>
#include <string>

using namespace std;

/**
 * @brief
 * A class used to store information about a linked in user
 */
class Profile {
 public:
  // Constructors
  Profile();
  Profile(int, string, string);

  // Setters
  void setFirstName(string);
  void setLastName(string);

  // Getters
  string getFirstName();
  string getLastName();

  // Other methods
  void display();

  // Overloaded Operators
  bool operator==(Profile profileToCompare);

 private:
  int id;
  string firstName;
  string lastName;
};

Profile::Profile() : id{0}, firstName{""}, lastName{""} {
  cout << "Default Constructor called" << endl;
}

Profile::Profile(int newId, string newFirstName, string newLastName)
    : id{newId}, firstName{newFirstName}, lastName{newLastName} {
  cout << "Overloaded Constructor called" << endl;
}

void Profile::setFirstName(string firstName) {
  cout << this;
  this->firstName = firstName;
}
void Profile::setLastName(string newLastName) { lastName = newLastName; }

string Profile::getFirstName() { return firstName; }
string Profile::getLastName() { return lastName; }

void Profile::display() {
  (*this).id;
  this->id;
  cout << id << endl;
  cout << firstName << endl;
  cout << lastName << endl;
}

bool Profile::operator==(Profile profileToCompare) {
  cout << this->firstName << endl;
  return this->lastName == profileToCompare.lastName;
}

int main() {
  Profile profile1(1, "Erik", "Gabrielsen");
  Profile profile2(2, "Liz", "Gabrielsen");

  profile1.display();

  // profile1.operator==(profile2)
  if (profile1 == profile2) {
    cout << "Equal!" << endl;
  } else {
    cout << "Not Equal!" << endl;
  }

  return 0;
}