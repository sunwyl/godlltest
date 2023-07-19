#include "testlib.h"

#include <future>
#include <iostream>

Cbf cbfImpl;

void hello() {
    std::cout << "Hello, World!" << std::endl;
}

int create(Cbf cbf){
    cbfImpl = cbf;
    return 1;
}

[[noreturn]] void f(int a){
    while (true){
        cbfImpl(a);
    }
}

int connect(){
    std::async(f,1);
    return 1;
}