#include<iostream>
using namespace std;
#include"1.h"

int main(){
    cout<<"inside 1.cpp";
    test(); //call func that is define in 2.cpp file
}

// steps for execution
// g++ 1.cpp     
// i get =>undefined reference to `test()'
// collect2.exe: error: ld(linker) returned 1 exit status
// 1)g++ -c  1.cpp 2.cpp     =>for obj file creation
// 2)g++ 1.o 2.o -o main     =>tell linker to link these file and create a custom (main.exe) file
// 3) ./main.exe
// 4) output->inside 1.cpp inside 2.cpp