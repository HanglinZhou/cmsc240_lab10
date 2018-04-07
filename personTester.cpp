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

  //test constructors
  cout << "Testing constructors:" << endl;
  cout << "-------------------------------------" << endl << endl;

  cout << "Person p2 (20000000, \"sb2bz\", \"B \"sirius.black@hogwarts.ac.uk\", \"12 Grimmauld Place\", 22222)" << endl;
  Person p2 (20000000, "sb2bz", "Black", "Sirius", 3, 11, 1959, "sirius.black@hogwarts.ac.uk", "12 Grimmauld Place", 22222);
  cout << "First name: " << p2.getFirstName() << "[Expected: Sirius]" << endl;
  cout << "Last name: " << p2.getLastName() << "[Expected: Black]" << endl;
  cout << "Date of birth: " << p2.getDateOfBirth().tm_mon + 1<< "/" <<
  p2.getDateOfBirth().tm_mday << "/" << p2.getDateOfBirth().tm_year + 1900<<
  "[Expected: 11/3/1959]" << endl;
  cout << "Address: " << p2.getAddress() << "[Expected: 12 Grimmauld Place]" << endl;
  cout << "NetID: " << p2.getNetID() << "[Expected: sb2bz]" << endl;
  cout << "URID: " << p2.getURID() << "[Expected: 20000000" << endl;
  cout << "Email: " << p2.getEmail() << "[Expected:sirius.black@hogwarts.ac.uk]" << endl;
  cout << "Phone: " << p2.getPhone() << "[Expected: 22222]" << endl;





  return (0);
}
