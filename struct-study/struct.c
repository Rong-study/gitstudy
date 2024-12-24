#include <stdio.h>

// ����ṹ��
struct Point {
    int x;
    int y;
};

// ��������ӡ�ṹ�������
void printPoint(struct Point p) {
    printf("Point(x: %d, y: %d)\n", p.x, p.y);
}

int main() {
    // �����ṹ���������ʼ��
    struct Point p1 = {10, 20};
    struct Point p2 = {30, 40};

    // ��ӡ�ṹ������
    printPoint(p1);
    printPoint(p2);

    // ʹ��ָ����ʽṹ���Ա
    struct Point *ptr = &p1;
    printf("ptr->x = %d, ptr->y = %d\n", ptr->x, ptr->y);

    return 0;
}
