//Name: Will Saada, Hanglin Zhou (Jojo)
#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main(){
  //test setters and getters
  cout << "Testing setters and getters:" << endl;
  cout << "-------------------------------------" << endl << endl;

  cout << "Student s;" << endl;
  Student s;

  cout << "s.addCourse('Algebra')" << endl;
  s.addCourse("Algebra");
  cout << "Course List: " << s.printCourses() << "[Expected: Algebra]" << endl;

  list<string> course_list;
  course_list.append("Algebra");
  course_list.append("Computer Science");
  course_list.append("Chemistry");
  cout << "s.setCourses(course_list)" << endl;
  s.setCourses(course_list);
  cout << "Course List: " << s.printCourses() << "[Expected: Algebra, Compuer Science, Chemistry]" << endl;

  cout << "s.removeCourse('Algebra')" << endl;
  s.removeCourse("Algebra")
  cout << "Course List: " << s.printCourses << "[Expected: Computer Science, Chemisty]" << endl;

  s.setAdmitDate(17, 1, 1997);
  cout << "s.getAdmitDate()" << endl;
  cout << "Admit Date: " << s.getAdmitDate() << "[Expected: 1/17/1997]" << endl;

  cout << "s.setSchool(School::AS)" << endl;
  s.setSchool(School::AS);
  cout << "School: " << s.getSchool() << "[Expected: AS]" << endl;

  cout << "s.setGPA(4.0)" << endl;
  s.setGPA(4.0);
  cout << "URID: " << s.getGpa() << "[Expected: 4.0]" << endl;

  
  cout << "s.setUnitsCompleted(15)" << endl;
  s.setUnitsCompleted(15);
  cout << "Units Completed: " << s.getUnitsCompleted() << "[Expected: 15]" << endl;
  cout << endl << endl;

  
  cout << "s.setFullTimeStatus()" << endl;
  s.setFullTimeStatus(true);
  cout << "Full Time Status: " << s.getFullTimeStatus() << "[Expected: True]" << endl;
  cout << endl << endl;


  //test constructors
  cout << "Testing constructors:" << endl;
  cout << "-------------------------------------" << endl << endl;

  cout << "Person p2 (20000000, \"sb2bz\", \"Black\", \"Sirius\", \"sirius.black@hogwarts.ac.uk\", \"12 Grimmauld Place\", 22222, 
    1, 17, 1997, School:AS, true, 10)" << endl;
  Student s2 (20000000, "sb2bz", "Black", "Sirius", "sirius.black@hogwarts.ac.uk", "12 Grimmauld Place", 22222, 
    1, 17, 1997, School:AS, true, 10);
  cout << "Print s2's info" << endl;
  cout << "First name: " << s2.getFirstName() << "[Expected: Sirius]" << endl;
  cout << "Last name: " << s2.getLastName() << "[Expected: Black]" << endl;
  cout << "Date of birth: " << s2.getDateOfBirth().tm_mon + 1<< "/" <<
  s2.getDateOfBirth().tm_mday << "/" << s2.getDateOfBirth().tm_year + 1900<<
  "[Expected: 11/3/1959]" << endl;
  cout << "Address: " << s2.getAddress() << "[Expected: 12 Grimmauld Place]" << endl;
  cout << "NetID: " << s2.getNetID() << "[Expected: sb2bz]" << endl;
  cout << "URID: " << s2.getURID() << "[Expected: 20000000" << endl;
  cout << "Email: " << s2.getEmail() << "[Expected:sirius.black@hogwarts.ac.uk]" << endl;
  cout << "Phone: " << s2.getPhone() << "[Expected: 22222]" << endl << endl;
  cout << "Full Time Status: " << s.getFullTimeStatus() << "[Expected: True]" << endl;
  cout << "School: " << s2.getSchool() << "[Expected: AS]" << endl;
  cout << "Admit Date: " << s2.getAdmitDate() << "[Expected: 1/17/1997]" << endl;

  cout << "----------Copy constructor-----------" << endl;
  cout << "Person p3 (30000000, \"aw2bz\", \"Weasley\", \"Arthur\", \"arthur.weasley@hogwarts.ac.uk\", \"The Burrow\", 33333
    2, 4, 1990, School:AS, true, 10)" << endl;
  Person p3 (30000000, "aw2bz", "Weasley", "Arthur", 6, 2, 1950,
             "arthur.weasley@hogwarts.ac.uk", "The Burrow", 333332, 4, 1990, School:AS, true, 10);
  cout << "Student s4(s3)" << endl;
  cout << "Print s4's info" << endl;
  s3.setCourses(course_list);
  Student s4(s3);


  cout << "First name: " << s4.getFirstName() << "[Expected: Arthur]" << endl;
  cout << "Last name: " << s4.getLastName() << "[Expected: Weasley]" << endl;
  cout << "Date of birth: " << s4.getDateOfBirth().tm_mon + 1<< "/" <<
  s4.getDateOfBirth().tm_mday << "/" << s4.getDateOfBirth().tm_year + 1900<<
  "[Expected: 2/6/1950]" << endl;
  cout << "Address: " << s4.getAddress() << "[Expected: The Burrow]" << endl;
  cout << "NetID: " << s4.getNetID() << "[Expected: aw2bz]" << endl;
  cout << "URID: " << s4.getURID() << "[Expected: 30000000" << endl;
  cout << "Email: " << s4.getEmail() << "[Expected:arthur.weasley@hogwarts.ac.uk]" << endl;
  cout << "Phone: " << s4.getPhone() << "[Expected: 33333]" << endl;
  cout << "Full Time Status: " << s.getFullTimeStatus() << "[Expected: True]" << endl;
  cout << "School: " << s2.getSchool() << "[Expected: AS]" << endl;
  cout << "Admit Date: " << s2.getAdmitDate() << "[Expected: 1/17/1997]" << endl;
  cout << "Course List:" << s4.printCourses() << "[Expected: Computer Science ]" << endl;



  return (0);
