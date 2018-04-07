//Name: Will Saada, Hanglin Zhou (Jojo)
#include <iostream>
#include "Person.h"

using namespace std;

int main(){
  //test setters and getters
  cout << "Testing setters and getters:" << endl;
  cout << "-------------------------------------" << endl << endl;

  cout << "Person p:" << endl;
  Person p;

  cout << "p.setFirstName(\"Harry\")" << endl;
  p.setFirstName("Harry");
  cout << "First name: " << p.getFirstName() << "[Expected: Harry]" << endl;

  cout << "p.setLastName(\"Potter\")" << endl;
  p.setLastName("Potter");
  cout << "Last name: " << p.getLastName() << "[Expected: Potter]" << endl;

  cout << "p.setDateOfBirth(31, 7, 1980)" << endl;
  p.setDateOfBirth(31, 7, 1980);
  cout << "Date of birth: " << p.getDateOfBirth().tm_mon + 1 << "/" <<
  p.getDateOfBirth().tm_mday << "/" << p.getDateOfBirth().tm_year + 1900<<
  "[Expected: 7/31/1980]" << endl;

  cout << "p.setAddress(\"4 Private Dr\")" << endl;
  p.setAddress("4 Private Dr");
  cout << "Address: " << p.getAddress() << "[Expected: 4 Private Dr]" << endl;

  cout << "p.setNetID(\"hp2bz\")" << endl;
  p.setNetID("hp2bz");
  cout << "NetID: " << p.getNetID() << "[Expected: hp2bz]" << endl;

  cout << "p.setURID(10000000)" << endl;
  p.setURID(10000000);
  cout << "URID: " << p.getURID() << "[Expected: 10000000]" << endl;

  cout << "p.setEmail(\"harry.potter@hogwarts.ac.uk\")" << endl;
  p.setEmail("harry.potter@hogwarts.ac.uk");
  cout << "Email: " << p.getEmail() << "[Expected: harry.potter@hogwarts.ac.uk]" << endl;

  cout << "p.setPhone(111111)" << endl;
  p.setPhone(111111);
  cout << "Phone: " << p.getPhone() << "[Expected: 111111]" << endl;
  cout << endl << endl;

  //test constructors
  cout << "Testing constructors:" << endl;
  cout << "-------------------------------------" << endl << endl;

  cout << "Person p2 (20000000, \"sb2bz\", \"Black\", \"Sirius\", \"sirius.black@hogwarts.ac.uk\", \"12 Grimmauld Place\", 22222)" << endl;
  Person p2 (20000000, "sb2bz", "Black", "Sirius", 3, 11, 1959, "sirius.black@hogwarts.ac.uk", "12 Grimmauld Place", 22222);
  cout << "Print p2's info" << endl;
  cout << "First name: " << p2.getFirstName() << "[Expected: Sirius]" << endl;
  cout << "Last name: " << p2.getLastName() << "[Expected: Black]" << endl;
  cout << "Date of birth: " << p2.getDateOfBirth().tm_mon + 1<< "/" <<
  p2.getDateOfBirth().tm_mday << "/" << p2.getDateOfBirth().tm_year + 1900<<
  "[Expected: 11/3/1959]" << endl;
  cout << "Address: " << p2.getAddress() << "[Expected: 12 Grimmauld Place]" << endl;
  cout << "NetID: " << p2.getNetID() << "[Expected: sb2bz]" << endl;
  cout << "URID: " << p2.getURID() << "[Expected: 20000000" << endl;
  cout << "Email: " << p2.getEmail() << "[Expected:sirius.black@hogwarts.ac.uk]" << endl;
  cout << "Phone: " << p2.getPhone() << "[Expected: 22222]" << endl << endl;

  cout << "----------Copy constructor-----------" << endl;
  cout << "Person p3 (30000000, \"aw2bz\", \"Weasley\", \"Arthur\", \"arthur.weasley@hogwarts.ac.uk\", \"The Burrow\", 33333)" << endl;
  Person p3 (30000000, "aw2bz", "Weasley", "Arthur", 6, 2, 1950,
             "arthur.weasley@hogwarts.ac.uk", "The Burrow", 33333);
  cout << "Person p4(p3)" << endl;
  cout << "Print p4's info" << endl;
  Person p4(p3);
  cout << "First name: " << p4.getFirstName() << "[Expected: Arthur]" << endl;
  cout << "Last name: " << p4.getLastName() << "[Expected: Weasley]" << endl;
  cout << "Date of birth: " << p4.getDateOfBirth().tm_mon + 1<< "/" <<
  p4.getDateOfBirth().tm_mday << "/" << p4.getDateOfBirth().tm_year + 1900<<
  "[Expected: 2/6/1950]" << endl;
  cout << "Address: " << p4.getAddress() << "[Expected: The Burrow]" << endl;
  cout << "NetID: " << p4.getNetID() << "[Expected: aw2bz]" << endl;
  cout << "URID: " << p4.getURID() << "[Expected: 30000000" << endl;
  cout << "Email: " << p4.getEmail() << "[Expected:arthur.weasley@hogwarts.ac.uk]" << endl;
  cout << "Phone: " << p4.getPhone() << "[Expected: 33333]" << endl;





  return (0);
}
