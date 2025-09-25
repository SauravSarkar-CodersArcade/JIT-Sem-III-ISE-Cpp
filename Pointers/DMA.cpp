#include<iostream>
using namespace std;
int main(){
    // Create a 1D array of size n
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int * arr = new int[n]; // 1D array of size n
    cout << "Enter the " << n << " elements:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The " << n << " array elements are: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    // De-allocate the memory
    delete [] arr; // It is mandatory to delete the resource
    return 0;
}