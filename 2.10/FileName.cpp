#include <stdio.h>  
#include <math.h>  

#define SIZE 20  // �����εĴ�С��ÿһ�ߵ��ַ�����  

// �ж�һ�����Ƿ��������ڲ�  
int isHeart(int x, int y, int size) {
    double heartEquation = pow(x / size, 2) + pow(y / size, 2) - 1;
    heartEquation = heartEquation * heartEquation * heartEquation - heartEquation * pow(y / size, 3);
    return heartEquation <= 0;
}

int main() {
    int i, j;

    // ��ӡ������  
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // �жϵ�ǰ���Ƿ��������ڲ�  
            if (isHeart(i - SIZE / 2, j - SIZE / 2, SIZE)) {
                printf("*");  // �������ڲ���ӡ *  
            }
            else {
                printf(" ");  // �������ط���ӡ�ո�  
            }
        }
        printf("\n");
    }

    return 0;
}