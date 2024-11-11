#ifndef DOG_H
#define DOG_H

#include "Animal.h"  // 包含基类头文件

class Dog : public Animal {
public:
    // 重写 makeSound 函数
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

#endif // DOG_H
