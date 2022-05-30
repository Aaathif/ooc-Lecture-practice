#include <iostream>
#include <cstring>
using namespace std;

class Person {
  protected:
    char name[40];
    char address[50];
    int age;
  public:
    Person();
    void displayDetails();
};


class Student: public Person {
  protected:
    int studentNo;
    double GPA;
  public: 
    Student();
    void calGPA();
};


class Employee: public Person {
  protected:
    int empNo;
    double salary;
  public:
    Employee();
    void calSalary();
};

Person::Person(){
    strcpy(name, "Aathif");
    strcpy(address, "Maligawatta");
    age = 23;
}
void Person::displayDetails(){
    cout << name << " " << address << " " << age << endl;
}


Student::Student(){
    strcpy(name, "Salman");
    strcpy(address, "Dematagoda");
    age = 24;
    studentNo = 123;
    GPA = 3.1;
}
void Student::calGPA(){
    cout << name << " " << address << " " << age << " " << studentNo << " " << GPA << endl;
}


Employee::Employee(){
    strcpy(name, "Nabeel");
    strcpy(address, "Maradana");
    age = 26;
    empNo = 987;
    salary = 20000;
}
void Employee::calSalary(){
    cout << name << " " << address << " " << age << " " << empNo << " " << salary << endl;
}


int main() {
  Person p1;
  Student s1;
  Employee e1;

  p1.displayDetails();
  s1.calGPA();
  e1.calSalary();
  
    
  return 0;
}