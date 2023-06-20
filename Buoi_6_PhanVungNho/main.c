#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int b;      //Biến khởi tạo không có giá trị ban đầu
//int i = 10; //Biến toàn cục
const a = 2; // a là hằng số nên sẽ lưu ở vùng nhớ Text, chỉ cho phép đọc không cho phép chỉnh sửa.

int tong(int c, int d){         // Các biến c, d được gọi là các input parameter của hàm
    int e;                      // e là biến cục bộ
    e = a + b;                  // Các biến trên sẽ được lưu ở phân vùng Stack, và các biến không yêu cầu cần có giá trị khởi tạo hay bằng 0
    return e;
}

void swap_1(int a1, int b1){          // int a1 = 10   0x05
    int temp = a1;                  // int b1 = 20   0x06
    a1 = b1;
    b1 = temp;
}

void swap_2(int *a2, int *b2){          // int *a2 = 0xc1
    int temp = *a2;                     // int *b2 = 0xc2
    *a2 = *b2;
    *b2 = temp;    
}


 
int array[] = {11, 22 ,33, 44, 55};

int main(int argc, char const *argv[])
{
    int y;  // Biến cục bộ
    // Cách hoạt động các biến trên phân vùng Stack

    tong(10, 5);         // int c = 10       //0x01
                        // int d = 5        //0x02
                        // int e            
                        // int e = c + d
                        // return e
    //Stack
    int x1 = 10;    // 0xc1
    int y1 = 20;    // 0xc2
    swap_1(x1, y1);
    printf("x = %d, y = %d\n", x1, y1);     
    // Trong chương trình swap_1, ta thay đổi hoán đổi giá trị của 2 biến a1 và b1
    // Khi ta khai báo thông số đầu vào cho hàm swap_1 thì giá trị a1 = 10, b1 = 20 và chương trình sẽ hoán đổi giá trị giữa a1 và b1.
    // Còn giá trị của x1 và y1 khi khai báo vẫn sẽ được giữ nguyên, bởi vì giá trị của 2 biến x1 và y1 tại địa chỉ đó không hề được tác động thay đổi.


    swap_2(&x1, &y1);
    printf("x = %d, y = %d\n", x1, y1);     
    // Trong chương trình swap_2, ta thay đổi hoán đổi con trỏ của 2 input parameter *a2 và *b2
    // Khi ta khai báo thông số đầu vào cho hàm swap_2 thì địa chỉ của trên thanh ghi của biến x1 sẽ được truyền cho con trỏ *a2, x2 là *a2
    // Sau đó chương trình sẽ hoán đổi địa chỉ của x1 và y1. Khi vị trí được hoán đổi thì giá trị cũng sẽ thay đổi 

    //Array
    printf("Dia chi array: %p\n", array);

    /*
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Dia chi array[%d] = %p\n", k, &(array[i]));
    }*/



    // Hàm malloc
    int *array_1 = (int* )malloc(sizeof(int)*4);

    for (i = 0; i < 4; i++)
    {
        array_1[i] = 3*i;
    }

	for ( i = 0; i < 4; i++)
    {
        printf("i = %d\n", array_1[i]);
    }

    // Hàm realloc
    array_1 = (int* )reallo7(array_1, sizeof(int)*4);
    
    for (i = 0; i < 4; i++)
    {
        array_1[i] = 3*i;
    }

	for ( i = 0; i < 4; i++)
    {
        printf("i = %d\n", array_1[i]);
    }
    
    return 0;
}
