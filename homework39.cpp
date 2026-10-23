#include <iostream>
#include "yang.h"

using namespace std;

// 递归计算二项式系数（组合数）
long long C(int n, int k) {
    // 边界条件：C(n, 0) = 1, C(n, n) = 1
    if (k == 0 || k == n) {
        return 1;
    }
    // 使用题目给出的公式：C_n^i = C_{n-1}^{i-1} + C_{n-1}^i
    return C(n - 1, k - 1) + C(n - 1, k);
}

// 打印前导空格
void PrintBlank(int n) {
    for (int i = 0; i < n; i++) {
        cout << " "; // 每层打印一个空格，形成金字塔效果
    }
}

// 打印第 i 行的系数
void PrintCombine(int i) {
    // 第 i 行共有 i 个元素，分别对应 C(i-1, 0) 到 C(i-1, i-1)
    for (int j = 0; j < i; j++) {
        cout << C(i - 1, j);
        // 数字之间用空格隔开，行末不加多余空格，防止部分OJ判题严格报错
        if (j != i - 1) {
            cout << " "; 
        }
    }
}