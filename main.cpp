#include <iostream>
#include <vector>
#include <string>

struct Point {
    std::string name;
    int x;
    int y;

    Point(std::string s, int x, int y) {
        std::cout << "Constructor of " << s << " is here\n";
        this->name = s;
        this->x = x;
        this->y = y;
    }

    ~Point() {
        std::cout << "Destructor of " << this->name << " is here\n";
    }
};

// RAII???
struct Wrapper {
    int* p;

    Wrapper() {
        p = new int;
    }

    ~Wrapper() {
        delete p;
    }
};

// T
// T*
// T&

int main() {
    // Wrapper w;
    std::vector<Point> v;

    Point a("a", 1, 2);
    Point b("b", 1, 2);
    v.push_back(a);
    v.push_back(b);

    std::cout << "the end of main\n";
    return 0;
}

/*
 * C:
 * - general programming constructs
 *   - Operators: +, -, *, /, etc.
 *   - Statements: if, while, for, etc.
 *   - Collections: arrays
 *   - Complex types: struct
 *   - Pointers, addresses
 *   - Memory management: malloc (new in C++), free (delete in C++)
 * C++:
 * - references
 * - memory management (new/delete)
 * - classes, constructors, desctructors, methods, operator overlooading
 * - templates (!!!)
 * - STL
 * - how to use the library correctly
 */
