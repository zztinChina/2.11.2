#include <stdio.h>  
#include <math.h>  

#define SIZE 20  // 正方形的大小（每一边的字符数）  

// 判断一个点是否在心形内部  
int isHeart(int x, int y, int size) {
    double heartEquation = pow(x / size, 2) + pow(y / size, 2) - 1;
    heartEquation = heartEquation * heartEquation * heartEquation - heartEquation * pow(y / size, 3);
    return heartEquation <= 0;
}

int main() {
    int i, j;

    // 打印正方形  
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // 判断当前点是否在心形内部  
            if (isHeart(i - SIZE / 2, j - SIZE / 2, SIZE)) {
                printf("*");  // 在心形内部打印 *  
            }
            else {
                printf(" ");  // 在其他地方打印空格  
            }
        }
        printf("\n");
    }

    return 0;
}