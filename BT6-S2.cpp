#include<stdio.h>

int main() {
    const float PI = 3.14; 
    int ban_Kinh = 6;       
    printf("Gia tri ban kinh hinh tron = %d \n", ban_Kinh);

    float chu_Vi = 2 * PI * ban_Kinh;
    printf("Chu vi hinh tron = %.2f \n", chu_Vi);

    float dien_Tich = PI * ban_Kinh * ban_Kinh;
    printf("Dien tich hinh tron = %.2f \n", dien_Tich);

    return 0;
}
