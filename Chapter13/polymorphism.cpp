#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class becomes abstract
class Person {
 public:
  string name;
  string phoneNumber;
  int age;

  Person(string name, string phoneNumber, int age) {
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->age = age;
  }

  virtual void print() = 0;
};

class Student : public Person {
 public:
  int studentId;

  Student(int studentId, string name, string phoneNumber, int age)
      : Person(name, phoneNumber, age) {
    this->studentId = studentId;
  }

  void print() {
    Person::print();
    cout << "StudentId: " << studentId << endl;
  }
};

class Professor : public Person {
 public:
  int facultyId;

  Professor(int facultyId, string name, string phoneNumber, int age)
      : Person(name, phoneNumber, age) {
    this->facultyId = facultyId;
  }

  void print() {
    Person::print();
    cout << "FacultyId: " << facultyId << endl;
  }
};

int main() {
  // Person *person = new Person("Person", "1234567890", 20);
  Student *student = new Student(321, "Tim", "5125431455", 19);
  Professor *professor = new Professor(123, "Chris", "214502954903", 40);

  Person *object1 = student;

  object1->print();  // use the derived version of that function

  Person *p1 = student;
  p1->print();

  vector<int> number;

  vector<Person *> people;  // vector of memory addresses
  people.push_back(student);
  people.push_back(professor);

  for (int i = 0; i < people.size(); i++) {
    people.at(i)->print();
  }

  for (int i = 0; i < people.size(); i++) {
    cout << people.at(i) << endl;
  }

  return 0;
}