#include<iostream>
using namespace std;
int main(){
    int input;
    cout << "Enter an integer (1, 2 or 3):" << endl;
    cin >> input;
    try{
    if(input == 1)
        throw 1; // Integer Value
    else if(input == 2)
        throw 'a';    
    else if(input == 3)
        throw 3.5;
    else{
        cerr << "Invalid Input Data" << endl;
    }  
}catch (int x){
    cout << "You gave input as: " << x << endl;
}catch(const char c){
    cout << "You typed: " << c << endl;
} catch (double d){
    cout << "You gave input as: " << d << endl;
}  
    return 0;
}