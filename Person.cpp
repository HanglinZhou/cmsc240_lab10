//Name: Will Saada, Hanglin Zhou (Jojo)
#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"
#include <iostream>

Person::Person(){

}

Person::Person(const Person& other){
  this->URID = other.URID;
  this->NetID = other.NetID;
  this->lastName = other.lastName;
  this->firstName = other.firstName;
  this->dob.tm_mday = other.dob.tm_mday;
  this->dob.tm_mon = other.dob.tm_mon;
  this->dob.tm_year = other.dob.tm_year;
  this->email = other.email;
  this->address = other.address;
  this->phone = other.phone;
}

Person::Person(int urid, std::string netid, std::string lname, std::string
               fname, int dob_day, int dob_month, int dob_year, std::string
               email, std::string address, long phone){
  URID = urid;
  NetID = netid;
  lastName =lname;
  firstName = fname;
  dob.tm_mday = dob_day;
  dob.tm_mon = dob_month - 1;
  dob.tm_year = dob_year - 1900;
  this->email = email;
  this->address = address;
  this->phone = phone;
}


Person::~Person(){

}

std::string Person::getFirstName(){
  return firstName;
}

std::string Person::getLastName(){
  return lastName;
}

struct tm Person::getDateOfBirth(){
  return dob;
}

std::string Person::getAddress(){
  return address;
}

std::string Person::getNetID(){
  return NetID;
}

int Person::getURID(){
  return URID;
}

std::string Person::getEmail(){
  return email;
}

long Person::getPhone(){
  return phone;
}

void Person::setFirstName(std::string fname){
  firstName = fname;
}

void Person::setLastName(std::string lname){
  lastName = lname;
}

void Person::setDateOfBirth(int day, int month, int year){
  dob.tm_mday = day;
  dob.tm_mon = month - 1;
  dob.tm_year = year - 1900;
}

void Person::setAddress(std::string address){
  this->address = address;
}

void Person::setNetID(std::string netid){
  NetID = netid;
}

void Person::setURID(int urid){
  URID = urid;
}

void Person::setEmail(std::string email){
  this->email = email;
}


void Person::setPhone(long number){
  phone = number;
}


#endif
