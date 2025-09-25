#include<iostream>
using namespace std;
int main(){
    // Create a 2D array of size n x n
    int n,m;
    cout << "Enter the size of the nxm array:" << endl;
    cin >> n >> m;
    int ** squarematrix = new int * [n];
    // This way, only the entire box is available
    // Now, we need to assign size to each row
    for(int i=0; i<n; i++){
        squarematrix[i] = new int[m]; // This is mandatory
        for(int j=0; j<m; j++){
            cin >> squarematrix[i][j];
        } 
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << squarematrix[i][j] << " ";
        } cout << endl;
    }
    delete [] squarematrix;
    return 0;
}