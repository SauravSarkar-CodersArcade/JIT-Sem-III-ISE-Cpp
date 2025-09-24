#include<iostream>
using namespace std;
class AbstractEmployee {
    virtual void checkPromotion() = 0; // It behaves like interface in Java 
};
class Employee : AbstractEmployee {
// Attributes // Properties // Fields // Instance Variables
public:
    string Name;
    int Age;
    string Company;
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    ~Employee(){
        cout << "Object has been destroyed...!!!" << endl;
    }
    virtual void work(){
        cout << Name << " attends meetings, drafts mails, etc..." << endl;
    }
    void checkPromotion(){
        if(Age > 32){
            cout << Name << " is promoted...!!" << endl;
        }else{
            cout << Name << "! Better Luck Next Time....!!!!" << endl;
        }
    }
};
class SoftwareDeveloper : public Employee {
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string fPL)
    : Employee(name, age, company)
    {
        FavProLang = fPL;
    }
    void createApps(){
        cout << Name << " creates apps using " << FavProLang << endl;
    }
    void work () override {
        cout << Name << " meets clients, debugs apps, etc..." << endl;
    }
};
int main(){
    Employee e1("Sahana", 32, "Bizotic"); // S1
    e1.employeeDetails();
    e1.work();
    Employee e2 = Employee("Pranav", 31, "Bizotic"); // S2
    e2.employeeDetails();
    e2.work();
    SoftwareDeveloper s1("Ramya", 35, "Bizotic", "C++");
    s1.employeeDetails();
    s1.createApps();
    s1.work();
    e1.checkPromotion();
    e2.checkPromotion();
    s1.checkPromotion();
    return 0;
}