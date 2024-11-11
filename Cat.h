#ifndef CAT_H
#define CAT_H

#include "Animal.h"  // 包含基类头文件

class Cat : public Animal {
public:
    // 重写 makeSound 函数
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
};

#endif // CAT_H
