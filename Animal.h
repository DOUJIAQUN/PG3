#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    // 虚函数 makeSound：允许派生类重写
    virtual void makeSound() const {
        cout << "Some generic animal sound" << endl;
    }

    // 虚析构函数：确保删除派生类对象时调用正确的析构函数
    virtual ~Animal() {}
};

#endif // ANIMAL_H
