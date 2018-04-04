#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"
#include <iostream>

Person::Person(){

}

Person::Person(const Person& other){

}

Person::Person(int urid, std::string netid, std::string lname, std::string
               fname, int dob_day, int dob_month, int dob_year, std::string
               email, std::string address, long phone){

}


Person::~Person(){

}

std::string Person::getFirstName(){
  return "first name?";
}

std::string Person::getLastName(){
  return "last name?";
}

struct tm Person::getDateOfBirth(){
  struct tm wrongDOB;
  return wrongDOB;
}

std::string Person::getAddress(){
  return "address?";
}

std::string Person::getNetID(){
  return "netID?";
}

int Person::getURID(){
  return 0;
}

std::string Person::getEmail(){
  return "email?";
}

long Person::getPhone(){
  return 000000000;
}

void Person::setFirstName(std::string fname){
}

void Person::setLastName(std::string lname){
}

void Person::setDateOfBirth(int day, int month, int year){
}

void Person::setAddress(std::string address){
}

void Person::setNetID(std::string netid){
}

void Person::setURID(int urid){
}

void Person::setEmail(std::string email){
}

void Person::setPhone(long number){
}


#endif
