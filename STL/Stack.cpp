#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define sinchana main
#define PI 3.14
int sinchana(){
    stack<int> s;
    s.push(1);
    s.push(10);
    s.push(11);
    cout << "Top Element: " << s.top() << endl;
    s.pop();
      cout << "Top Element: " << s.top() << endl;
      cout << PI;
    return 0;
}