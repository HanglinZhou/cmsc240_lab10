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
  cout << "At index 0: " << l.get(0) << " [Expected: 1]" << endl;
  cout << "At index 1: " << l.get(1) << " [Expected: 2]" << endl;
  cout << "At index 2: " << l.get(2) << " [Expected: 3]" << endl;
  cout << endl;
  cout << "Testing the size method, so error handling can be made for get method." << endl;

  cout << "Testing size: " << l.size() << " [Expected: 3]" << endl << endl;

  cout << "Testing invalid get() index 10" << endl;

  try{
    l.get(10);
  }
  catch (const exception& error){
        cerr << error.what() << endl;
  }
  cout << "[Expected: invalid attempt to retrieve from empty list:" << endl;
  cout << "invalid index: 10list size: 3]" << endl << endl;

  cout << "Testing remove(): " << endl;
  cout << "Remove head" << endl;
  cout << "l.remove(0): " << l.remove(0) << "[Expected: 1]" << endl;
  cout << "l.size(): " << l.size() << "[Expected: 2]" << endl;
  cout << "Remove given index out of bound" << endl;
  try {
    cout << "l.remove(10): " << l.remove(10) << endl;
  }
  catch (const exception& error){
    cerr << error.what() << endl;
  }
  cout << "[Expected: l.remove(10): invalid attempt to retrieve from empty list:"
  << endl;
  cout << "invalid index: 10list size: 2]" << endl;
  cout << "Remove tail" << endl;
  cout << "l.remove(1): " << l.remove(1) << "[Expected: 3]" << endl;
  cout << "l.size(): " << l.size() << "[Expected: 1]" << endl;
  cout << "Remove the last element in the list" << endl;
  cout << "l.remove(0): " << l.remove(0) << "[Expected: 2]" << endl;
  cout << "l.size(): " << l.size() << "[Expected: 0]" << endl;
  cout << "Remove from an empty list" << endl;
  try{
    cout << "l.remove(0): " << l.remove(0) << endl;
  }
  catch (const exception& error){
    cerr << error.what() << endl;
  }
  cout << "[Expected: l.remove(0): invalid attempt to retrieve from empty list:"
  << endl;
  cout << "invalid index: 0list size: 0]" << endl << endl;


  cout << "Test toArray() after add 1 2 3 to l" << endl;
  l.add(1);
  l.add(2);
  l.add(3);

  vector<int> v = l.toArray();
  cout << "vector<int> v = l.toArray():" << endl;
  cout << "v[0]: " << v[0] << "[Expected: 1]" << endl;
  cout << "v[1]: " << v[1] << "[Expected: 2]" << endl;
  cout << "v[2]: " << v[2] << "[Expected: 3]" << endl << endl;

  cout << "Test operator+=: " << endl;
  cout << "int a = 7" << endl;
  cout << "l += a" << endl;
  int a = 7;
  l += a;
  cout << "l.size(): " << l.size() << "[Expected: 4]" << endl;
  cout << "l.get(3): " << l.get(3) << "[Expected: 7]" << endl;
  return 0;
}
