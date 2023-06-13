#include <stdio.h>
 
#define MAX 10

#define tong(a, b) a+b

#define CREATE_FUNC(name_func, cmd)     \
void name_func(){                       \
    printf("%s\n", (char*)cmd);        \
}                

CREATE_FUNC (test1, "Hello world");

CREATE_FUNC (test2, "How are you");

int main(int argc, char const *argv[])
{
    test1();
    test2();
    printf("Tong: %d\n", tong(10, 7));
    return 0;
}

// VD
/*
#include <stdio.h>

void tong( int a, int b){           //0xC1 -> 0xC7
    printf("Tong cua a va b: %d\n", a + b);
}


int main(int argc, char const *argv[])
{ 
    A; //0x01   0x02    0x03
    B; //0x04   0x05
    C; //0x06   0x07    0x08

    // Khi chương trình chính chạy, Program Counter (PC) sẽ đếm và thực thi các lệnh từ 0x01 -> 0x08. 
    // Khi đến vị trí 0x09 thì PC sẽ trỏ đến vị trí của function (0xC1 -> 0xC7). Đồng thời vị trí 0x09 sẽ được lưu vào trong Stack pointer (ST).
    // Sau khi chạy xong Function (0xC1 -> 0xC7), PC sẽ trỏ đến vị trí mà ST đã lưu trước đó để tiếp tục đếm và thực thi các lệnh của chương trình.

    tong(10, 7);
    return 0;
}
*/
