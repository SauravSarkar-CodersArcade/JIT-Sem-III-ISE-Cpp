#include<iostream>
#include<string.h>
using namespace std;
union Employee {
    // char * name; // 8 bytes
    char name[20];
    int age; // 4 bytes
    int empID; // 4 bytes
};
int main(){
    union Employee e1; // Assign & Display 
    // e1.name = "Pranav"; // Static Allocation 
    strcpy(e1.name, "Pranav");
    cout << "Name: " << e1.name << endl;
    e1.age = 21;
     cout << "Age: " << e1.age << endl;
    e1.empID = 1001;
    cout << "ID: " << e1.empID << endl;
    cout << "Size: " << sizeof(e1) << " bytes." << endl;
    return 0;
}