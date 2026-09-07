/* 输入身高体重 → BMI = 体重 / (身高²)→ if / else if / else 分区间输出（ < 18.5 偏瘦 / 18.5 - 24 正常 / ≥24 超重）
   全部花括号初始化；F7 零警告
   观察实验：身高输 0 / 负数，现象记 glossary*/
#include <iostream>
#include "bmi.h"    // 拿到合同，编译器就知道 calcBmi 存在

int main()
{
    double height{};
    double weight{};
    std::cout << "身高";
    std::cin >> height;
    std::cout << "体重";
    std::cin >> weight;
    double bmi{ calcBmi(height, weight) };
    std::cout << "BMI = " << weight << " / (" << height << "²) = " << bmi << '\n';
    if (bmi < 18.5)
    {
        std::cout << "偏瘦\n";
    }
    else if (bmi < 24)    // 能走到这，说明 bmi >= 18.5 了，所以不用再写下限
    {
        std::cout << "正常\n";
    }
    else                  // 剩下的只有 bmi >= 24
    {
        std::cout << "超重\n";
    }
    return 0;
}
