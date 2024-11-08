#include <iostream>
#include "Message.hpp"

int main() {
    Message message("Hello, World!");
    std::cout << message.getText() << std::endl;
    return 0;
}
