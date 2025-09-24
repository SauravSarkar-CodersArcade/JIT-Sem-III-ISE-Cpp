#include<iostream>
using namespace std;
namespace dev1{
void add(int a, int b){
    cout << a + b << endl;
}
}
namespace dev2{
void add(int a, int b){
    cout << a + b << endl;
}
}
int main(){
    dev1::add(1,2);
    dev2::add(10,20);
    return 0;
}