#include<iostream>
using namespace std;
class Printer {
private:
    string _name;
public:
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    int _availablePaper;
    void PrintDoc(string txtDoc){
        // 40 characters 40/10 = 4 pages
        int requiredPaper = txtDoc.length() / 10;
        if(requiredPaper > _availablePaper){
            // throw 404;
            throw "Printer is Out Of Paper!";
        }
        cout << "Printing......!" << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }
};
int main(){
    Printer myPrinter("HP-LaserJet-30ti", 10);
    try{
        myPrinter.PrintDoc("Hello! I am Sinchana, I am an SDE.");
        myPrinter.PrintDoc("Hello! I am Nithin, I am an SDT.");
        myPrinter.PrintDoc("Hello! I am Shravya, I am an SDE.");
        myPrinter.PrintDoc("Hello! I am Pranav, I am an Apprentice.");
    }
    catch(int errorCode){
        cout << errorCode << ": Out of Paper!" << endl;
    }catch(const char * txtException){
        cout << txtException << endl;
    }
    catch(...){
        cout << "Something Unexpected Happpened!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}