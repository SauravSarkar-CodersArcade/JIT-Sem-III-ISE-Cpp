#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    char language[] = {'J','A','V','A'};
    // For Each Loop - Enhanced For Loop
    // auto - iterator in c++
    for(auto x : arr){
        cout << x << " ";
    }cout << endl;
    for(auto y : language){
        cout << y << " ";
    }
    return 0;
}