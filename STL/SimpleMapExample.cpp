#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, string> stateLanguages;
    stateLanguages.insert(pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Maharashtra", "Marathi"));
    stateLanguages.insert(pair<string, string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string, string>("Bihar", "Bhojpuri"));
    stateLanguages.insert(pair<string, string>("West Bengal", "Bengali"));
    stateLanguages["Assam"] = "Assamese";
    stateLanguages["Punjab"] = "Punjabi";
    stateLanguages.erase("Punjab");
    // stateLanguages.clear(); // Deletes Everything
    for(auto pair : stateLanguages){
        cout << "State: " << pair.first << ", Language: " 
        << pair.second << endl; 
    }
    return 0;
}