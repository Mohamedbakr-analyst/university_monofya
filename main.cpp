/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person
{
public:
    Person() {}
    Person(int id, string name, int age, string gender)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    int get_id()
    {
        return id;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_name()
    {
        return name;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    int get_age()
    {
        return age;
    }
    void set_gender(string gender)
    {
        this->gender = gender;
    }
    string get_gender()
    {
        return gender ;
    }
private:
    int id;
    string name;
    int age;
    string gender;
};
class Student : Person
{
public:
    Student() {}
    Student(int id, string name, int age, string gender, int level, float gpa)
        : Person(id, name, age, gender)
    {
        this->level = level;
        this->gpa = gpa;
    }
    void set_level(int level)
    {
        this->level = level;
    }
    int get_level()
    {
        return level;
    }
    void set_gba(float gpa)
    {
        this->gpa ;
    }
private:
    int level ;
    float gpa ;
};

class singleton
{
private:
    static singleton* instance;

    singleton()
    {

    }

public:
    static singleton* get_instance()
    {
        if (instance == nullptr)
        {
            instance = new singleton();
        }
        return instance;
    }

};

singleton* singleton::instance = nullptr;

int main() {


    return 0 ;
}
*/


#include <iostream>
#include <vector>
using namespace std;


//////department//////
class Department
{
private:
    string name;
    int capacity;
    double required_gpa;

public:

    Department()
    {
        name = "";
        capacity = 0;
        required_gpa = 0.0;
    }



    Department(string name, int capacity, double required_gpa)
    {
        name=name;
        capacity=capacity;
        required_gpa=required_gpa;
    }



    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        name=name;
    }


    int get_capacity()
    {
        return capacity;
    }
    void set_capacity(int capacity)
    {
        capacity = capacity;
    }


    double get_required_gpa()
    {
        return required_gpa;
    }

    void set_required_gpa(double required_gpa)
    {
        required_gpa = required_gpa;
    }

};



/////person/////
class Person
{
public:
    int id;
    string name;
    int age;
    char gender;

public:

    Person()
    {
        id = 0;
        name = "";
        age = 0;
        gender = 'f';
    }



    Person(int id, string name, int age, char gender)
    {
        id=id;
        name=name;
        age=age;
        gender=gender;
    }



    int get_id()
    {
        return id;
    }

    void set_id(int id)
    {
        id=id;
    }

    string get_name()
    {
        return name;
    }

    void set_name(string name)
    {
        name=name;
    }


    int get_age()
    {
        return age;
    }

    void set_age(int age)
    {
        age=age;
    }


    char get_gender()
    {
        return gender;
    }

    void set_gender(char gender)
    {
        gender=gender;
    }

};



////////Student///////
class Student : public Person
{
private:
    int level;
    float gpa;

public:
    // default constructor
    Student()
    {
        level = 1;
        gpa = 3.5;
    }

    // parameterized constructor
    Student(int l, float g) : Person(id, name, age, gender)
    {
        level = l;
        gpa = g;
    }

    // setters
    void set_level(int l)
    {
        level = l;
    }

    void set_gba(float g)
    {
        gpa = g;
    }

    // getters
    int get_level()
    {
        return level;
    }

    float get_gba()
    {
        return gpa;
    }

};


/////professor/////
class professor: public Person
{
private:
    string department;
    double salary;
    string degree;

public:

    professor()
    {
        department = "";
        salary = 0.0;
        degree = "";
    }



    professor(string dep, double sal, string deg): Person( id, name, age, gender)
    {
        department = dep;
        salary = sal;
        degree = deg;
    }



    string get_department()
    {
        return department;
    }
    void set_degree(string deg)
    {
        degree = deg;
    }


    double get_salary()
    {
        return salary;
    }
    void set_salary(double sal)
    {
        salary = sal;
    }


    string get_degree()
    {
        return degree;
    }

    void set_department(string dep)
    {
        department = dep;
    }

};

//////course/////////
class Course
{
private :
    string course_name;
    string course_code;
    int course_hours;
    vector<string> prerequisites;
    professor professor_name;
    vector<Student> student_name;

public :
    //defult constructor
    Course ()
    {
        course_name="";
        course_code = "";
        course_hours = 0;
    }

    //parameterized constractor
    Course (string name, int code, int hour, vector<string> prereq, professor prof_name, vector<Student> stud_name)
    {
        course_name = name;
        course_code = code;
        course_hours = hour;
        prerequisites = prereq;
        professor_name = prof_name;
        student_name = stud_name;
    }

    //setter
    void set_name(string name)
    {
        course_name = name;
    }
    void set_code(int code)
    {
        course_code = code;
    }
    void set_hours(int hour)
    {
        course_hours = hour;
    }
    void set_prereq(vector<string> prereq)
    {
        prerequisites = prereq;
    }
    void set_prof_name(professor prof_name)
    {
        professor_name = prof_name;
    }
    void set_stud_name(vector<Student> student_name)
    {
        student_name = student_name;
    }

    //getter
    string get_name()
    {
        return course_name;
    }
    string get_code(int code)
    {
        return course_code ;
    }
    int get_hours(int hour)
    {
        return course_hours ;
    }
    vector<string> get_prereq(string prereq)
    {
        return prerequisites ;
    }
    professor get_prof_name(string prof_name)
    {
        return professor_name ;
    }
    vector<Student> get_stud_name()
    {
        return student_name;
    }

};


int main() {



return 0 ;
}

