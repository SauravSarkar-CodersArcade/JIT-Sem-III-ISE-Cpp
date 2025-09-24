#include<iostream>
#include<string.h>
using namespace std;
struct Employee {
    // char * name; // 8 bytes
    char name[20];
    int age; // 4 bytes
    int empID; // 4 bytes
};
int main(){
    struct Employee e1;
    // e1.name = "Pranav"; // Static Allocation 
    strcpy(e1.name, "Pranav");
    e1.age = 21;
    e1.empID = 1001;
    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "ID: " << e1.empID << endl;
    cout << "Size: " << sizeof(e1) << " bytes." << endl;
    return 0;
}