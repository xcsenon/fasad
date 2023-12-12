#include <iostream>

// Subsystem A
class SubsystemA {
public:
    void operationA() const {
        std::cout << "Subsystem A operation" << std::endl;
    }
};

// Subsystem B
class SubsystemB {
public:
    void operationB() const {
        std::cout << "Subsystem B operation" << std::endl;
    }
};

// Subsystem C
class SubsystemC {
public:
    void operationC() const {
        std::cout << "Subsystem C operation" << std::endl;
    }
};

// Facade
class Facade {
private:
    SubsystemA subsystemA;
    SubsystemB subsystemB;
    SubsystemC subsystemC;

public:
    void operation() const {
        std::cout << "Facade operation" << std::endl;
        subsystemA.operationA();
        subsystemB.operationB();
        subsystemC.operationC();
    }
};

int main() {
    Facade facade;
    facade.operation();

    return 0;
}
