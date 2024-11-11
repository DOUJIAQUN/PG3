#include<stdio.h>
#include "Animal.h"  // 包含基类头文件
#include "Dog.h"     // 包含 Dog 类头文件
#include "Cat.h"     // 包含 Cat 类头文件
#include <vector>    // 用于存储 Animal 指针的向量

int main() {
    // 创建 Animal 类型的指针向量，用于存储不同的动物实例
    vector<Animal*> animals;
    animals.push_back(new Dog());  // 将 Dog 实例添加到向量中
    animals.push_back(new Cat());  // 将 Cat 实例添加到向量中

    // 通过多态性调用 makeSound 函数
    for (const auto& animal : animals) {
        animal->makeSound();  // 根据对象类型调用相应的 makeSound 实现
    }

    // 释放分配的内存，防止内存泄漏
    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
