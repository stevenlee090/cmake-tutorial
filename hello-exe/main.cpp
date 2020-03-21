#include <iostream>

#include <say-hello/hello.hpp>

int main() {
    // say hello
    hello::say_hello();

    std::cout << "The say hello library is version " << SAY_HELLO_VERSION << std::endl;

    return 0;
}