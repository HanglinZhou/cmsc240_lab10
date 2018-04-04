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
  return (0);
}
