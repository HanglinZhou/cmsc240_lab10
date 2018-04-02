#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <list>
#include "Student.h"
#include "Person.h"

class Student : public Person
{
        
    public:
        Student();                      // explicitly call Person() on implementation
        
        Student(const Student& other);  // call Person(other) on implementation
        
        Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed);
        
        ~Student();

        std::list<std::string> getCourses()
        {
            std::list<std::string> list;
            return list;
        }
        void                   addCourse(std::string course)
        {

        }
        void                   removeCourse(std::string course)
        {

        }
        void                   printCourses()
        {
        }
        void                   setCourses(std::list<std::string> courses)
        {
        }
        void                   clearCourses()
        {
        }
        struct tm              getAdmitDate()
        {
            struct tm time;
            return time;
        }
        
        School                 getSchool()
        {
            return 1;
        }

        double                 getGPA()
        {
            return 0.0;
        }
        double                 getUnitsCompleted()
        {
            return 0.0;
        }
        bool                   isFullTime()
        {
            return true;
        }

        void setAdmitDate(int day, int month, int year)
        {
        }
        void setSchool(School school)
        {
        }
        void setGPA(double gpa)
        {
        }
        void setUnitsCompleted(double units)
        {
        }
        void setFullTimeStatus(bool isFullTime)
        {
        }
};

#endif
