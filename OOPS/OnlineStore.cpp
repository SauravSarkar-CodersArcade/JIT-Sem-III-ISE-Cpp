#include<iostream>
#include<string.h>
using namespace std;
struct Store {
    int price;  // 4 bytes
    union {
    // Shirt
        struct{
        char size[10];
        char color[10];
        char brand[20];
        }shirt;
        // Book
        struct{
        char genre[20];
        char design[20];
        int isbn; // 4 bytes
        }book;
    }item;
};
int main(){
    struct Store s;
    s.price = 2999;
    strcpy(s.item.shirt.size, "M");
    strcpy(s.item.shirt.color, "Blue");
    strcpy(s.item.shirt.brand, "Zara");
    cout << "Size: " << sizeof(s) << " Bytes" << endl;
    return 0;
}