#include <iostream>
using namespace std;

class Student
{
    string Name;
    string Surname;
    string Family;
    string Course;
    string Specialty;
    string University;
    string Email;
    string PhoneNumber;

public:
    Student (string name, string surname, string family, string course, string spec, string univer, string email, string pnumber)
    {
        Name = name;
        Surname = surname;
        Family = family;
        Course = course;
        Specialty = spec;
        University = univer;
        Email = email;
        PhoneNumber = pnumber;
    }

    Student (string name, string family, string course, string spec, string univer)
    {
        Name = name;
        Family = family;
        Course = course;
        Specialty = spec;
        University = univer;
    }

    string getName() {
        return Name;
    }
    void setName(string name) {
        Name = name;
        }

    string getSurname(){
        return Surname;
    }
    void setSurname(string surname){
        Surname = surname;
    }

    string getFamily(){
        return Family;
    }
    void setFamily(string family){
        Family = family;
    }

    string getCourse(){
        return Course;
    }
    void setCourse(string course){
        Course = course;
    }

    string getSpecialty(){
        return Specialty;
    }
    void setSpecialty(string spec){
        Specialty = spec;
    }

    string getUniversity(){
        return University;
    }
    void setUniversity(string univer){
        University = univer;
    }

    string getEmail(){
        return Email;
    }
    void setEmail(string email){
        Email = email;
    }

    string getPNumber(){
        return PhoneNumber;
    }
    void PNumber(string pnumber){
        PhoneNumber = pnumber;
    }
};

int main()
{
    return 0;
}
