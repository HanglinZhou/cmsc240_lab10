#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <sstream>


template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;
     void add(T element);

     T get(int index) const;
     T remove(int index);

     std::vector<T> toArray() const;

     LinkedList<T>& operator+=( const T& item );
};

template <class T>
LinkedList<T>::LinkedList(){}

template <class T>
LinkedList<T>::~LinkedList(){}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& other){
  //list<T>::iterator
  typename std::list<T>::iterator itr = other.theList.begin();
  while (itr != other.theList.end()){
    theList.push_back(*itr);
    itr++;
  }
}
//adds an element to the end of the list
template <class T>
void LinkedList<T>::add(T element){
  theList.push_back(element);
}

template <class T>
int LinkedList<T>::size() const{
  return theList.size();
}

template <class T>
T LinkedList<T>::get(int index) const{

  if(index < theList.size() && index >= 0){
    typename std::list<T>::const_iterator itr = theList.begin();

    std::advance(itr,index);
    return *itr;
  }

  std::stringstream ss;
  ss << "invalid attempt to retrieve from empty list: " << std::endl;
  ss << "invalid index: " << index << "list size: " << theList.size() << std::endl;
  std::string str = ss.str();
  throw std::invalid_argument(str.c_str());


}

template <class T>
T LinkedList<T>::remove(int index){

  if(index < theList.size() && index >= 0){
  typename std::list<T>::iterator itr = theList.begin();

  std::advance(itr,index);

  T removeElem = *itr;
  theList.erase(itr);
  return removeElem;
  }

  std::stringstream ss;
  ss << "invalid attempt to retrieve from empty list: " << std::endl;
  ss << "invalid index: " << index << "list size: " << theList.size();
  std::string str = ss.str();
  throw std::invalid_argument(str.c_str());


}

template <class T>
std::vector<T> LinkedList<T>::toArray() const{
  std::vector<T> v;
  typename std::list<T>::const_iterator itr = theList.begin();

  while (itr != theList.end()){
    v.push_back(*itr);
    itr++;
  }

  return v;

}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(const T& item){
  add(item);
  return *this;
}


#endif
