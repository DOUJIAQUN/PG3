#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

int main() {
    // 初始化随机数种子
    std::srand(static_cast<unsigned int>(std::time(0)));

    // 随机生成 1 到 6 的数字（模拟骰子）
    int diceRoll = std::rand() % 6 + 1;

    // 提示用户输入
    int userGuess;
    std::cout << "奇数か偶数か当ててください (1: 奇数, 2: 偶数):";
    std::cin >> userGuess;

    // 使用无名函数处理判断
    auto checkGuess = [diceRoll](int guess) {

        if (guess != 1 && guess != 2) {
            std::cout << "無効な入力です。1（奇数）か2（偶数）を入力してください。" << std::endl;
            return 1;
        }

        // 判断用户的输入
        if ((diceRoll % 2 == 0 && guess == 2) || (diceRoll % 2 != 0 && guess == 1)) {
            std::cout << "正解！答えは " << diceRoll << std::endl;
        }
        else {
            std::cout << "残念！答えは " << diceRoll << std::endl;
        }
        };

    // 等待 3 秒后显示结果
    std::this_thread::sleep_for(std::chrono::seconds(3));

    // 调用无名函数
    checkGuess(userGuess);

    return 0;
}
