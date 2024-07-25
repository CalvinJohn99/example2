#include <iostream>

int main(int argc, char** argv) {
    std::cout << "[";
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i]; 

        if (i != argc - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    return 1;
}
