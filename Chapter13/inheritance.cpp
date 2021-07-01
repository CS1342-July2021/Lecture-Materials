#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
 public:
  Person() {
    cout << "Person Default Constructor Called" << endl;
    this->id = new int(0);
    name = "No Name";
  }

  Person(int id, string name) {
    cout << "Person Overloaded Constructor Called" << endl;
    this->id = new int(id);
    this->name = name;
  }

  ~Person() { delete id; }

  void setName(string name) { this->name = name; }
  string getName() { return this->name; }

 private:
  int *id;
  string name;
};

class Employee : public Person {
 public:
  Employee() : Person() {
    cout << "Employee Default Constructor Called" << endl;
    this->companyName = "";
  }

  Employee(int id, string name, string companyName) : Person(id, name) {
    cout << "Employee Overloaded constructor called " << endl;
    this->companyName = companyName;
  }

  void setCompanyName(string name) {
    setName("Erik Gabrielsen");
    this->companyName = name;
  }
  string getCompanyName() { return companyName; }

 private:
  string companyName;
};

class Student : public Person {
 public:
  void setSchoolName(string name) { this->schoolName = name; }
  string getSchoolName() { return schoolName; }

 private:
  string schoolName;
};

int main() {
  Employee *employee = new Employee(1, "Erik", "Dialexa");

  delete employee;

  return 0;
}