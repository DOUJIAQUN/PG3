#include <stdio.h>
#include <string>
#include <chrono>

int main() {
    std::string a(100000, 'a');

    // コピー時間の計測
    auto start_copy = std::chrono::high_resolution_clock::now();
    std::string b = a;
    auto end_copy = std::chrono::high_resolution_clock::now();

    auto copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy);

    // 移動時間の計測
    auto start_move = std::chrono::high_resolution_clock::now();
    std::string c = std::move(a);
    auto end_move = std::chrono::high_resolution_clock::now();

    auto move_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move);

    printf("100,000文字を移動とコピーで比較しました。\n");
    printf("コピー: %lld μs\n", copy_duration.count());
    printf("移動: %lld μs\n", move_duration.count());

    return 0;
}