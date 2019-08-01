// #include "../include/header.h" /// is OK
#include "header.h" // not recognized as a dependency of foo.o

int main(){
    return foo();
}