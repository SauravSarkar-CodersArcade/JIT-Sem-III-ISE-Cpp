#include<iostream>
using namespace std;
int main(){
    // Create a 2D array of size n x n
    int n;
    cout << "Enter the size of the nxn array:" << endl;
    cin >> n;
    int ** squarematrix = new int * [n];
    // This way, only the entire box is available
    // Now, we need to assign size to each row
    for(int i=0; i<n; i++){
        squarematrix[i] = new int[n]; // This is mandatory
        for(int j=0; j<n; j++){
            cin >> squarematrix[i][j];
        } 
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << squarematrix[i][j] << " ";
        } cout << endl;
    }
    delete [] squarematrix;
    return 0;
}