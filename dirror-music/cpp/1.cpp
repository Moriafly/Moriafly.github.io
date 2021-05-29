#include <iostream>
#include <cstring>

class Person {
    public:
        Person() {
            id = 0;

        }
        ~Person() {

        }

        
        
        int id;
        char *name;
        void disp() {

        }
};

class Student: public Person {
    public:
        Student() {
            sid = 0;
        }
        Student(int sid, char *name, char *subject) {
            this->sid = sid;
            this->name = new char[strlen(name) + 1];
            this->subject = new char[strlen(subject) + 1];
        }
        Student(const Student &student) {

        }
        ~Student() {

        }
    
        int sid;
        char* subject;
        void disp() {
            std::cout << "sid: " << sid << " name: " << name << " subject: " << subject << std::endl;
        };

};

int main() {

    Student student(5, (char*)"wsh", (char*)"chinese");
    student.disp();

}