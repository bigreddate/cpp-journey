#include "bmi.h"    // 也包含头文件：让编译器检查"实现和合同一致"

double calcBmi(double height, double weight)    // 定义：签名 + 函数体
{
    return weight / (height * height);
}