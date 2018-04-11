#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>

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
void LinkedList<T>::add(T element)
{
    theList.push_back(element);
}

template <class T>
int LinkedList<T>::size() const;
{
    return 5;
}

template <class T>
T LinkedList<T>::get(int index) const;
{
    /* typename std::list<T>::iterator itr = other.theList.begin();
    while (itr != other.theList.end()){
    theList.;
    itr++;
    */
    T t;

    return t;
  }
   
}


template <class T>
T LinkedList<T>::remove(int index){
  T t;
  return t;
}

template <class T>
vector<T> LinkedList<T>::toArray() const{
  vector<T> v;
  return v;
}

template <class T>
LinkedList<T>& operator+=(const T& item){
  LinkedList<T> t;
  return t;
}


#endif
