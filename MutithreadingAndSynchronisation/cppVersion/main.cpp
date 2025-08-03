#include <iostream>
#include <thread>

void say_hello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(say_hello);  // Start a new thread
    t.join();  // Wait for the thread to finish
    std::cout << "Hello from main!" << std::endl;
    return 0;
}