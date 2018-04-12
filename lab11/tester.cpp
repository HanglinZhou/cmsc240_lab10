#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){

  LinkedList<int> l;
  
  //The get and add method are needed first to test other elements
  cout << "Testing method add(T element) in the LinkedList class with integers." << endl;
  l.add(1);
  l.add(2);
  l.add(3);

  cout << "Added 1, 2, 3 into the list, the following code will use the get method to print the values" << endl;
  cout << "At index 0: " << l.get(0) << " Expected: 1" << endl;
  cout << "At index 0: " << l.get(1) << " Expected: 2" << endl;
  cout << "At index 0: " << l.get(2) << " Expected: 3" << endl;
  cout << endl;
  cout << "Testing the size method, so error handling can be made for get method." << endl;

  cout << "Testing size: " << l.size() << " Expected: 3" << endl;

  cout << "Testing Invalid get() index 10";
  l.get(10); 






  return 0;
}
