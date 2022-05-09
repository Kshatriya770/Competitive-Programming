#include <iostream>

using naemspace std;

struct X {
    X() { cout<< "DEFAULT\n";}
    X(int) { cout<<"INT\n";}
    X(initializer_list<int>){ cout << "LIST\n"}
};

int main(int argc, char *argv[]){
    { X x;}
    { auto x = X(); }
    { X x{}; }
    { X x = {}; }
    { X x({});}
    { X x{1}; }
    { X x(1); }
    { X x({1}); }
    { X x = 1; }
    { X x = {1};}
}