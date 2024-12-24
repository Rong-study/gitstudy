#include <stdio.h>

// 定义结构体
struct Point {
    int x;
    int y;
};

// 函数：打印结构体的内容
void printPoint(struct Point p) {
    printf("Point(x: %d, y: %d)\n", p.x, p.y);
}

int main() {
    // 声明结构体变量并初始化
    struct Point p1 = {10, 20};
    struct Point p2 = {30, 40};

    // 打印结构体内容
    printPoint(p1);
    printPoint(p2);

    // 使用指针访问结构体成员
    struct Point *ptr = &p1;
    printf("ptr->x = %d, ptr->y = %d\n", ptr->x, ptr->y);

    return 0;
}
