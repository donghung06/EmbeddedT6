#include <stdio.h>

int Tong(int a, int b){
    printf("Tong cua %d va %d = %d\n",a, b, a+b);
}

int Hieu(int a, int b){
    printf("Tong cua %d va %d = %d\n",a, b, a-b);
}

void Tich(int a, int b){
    printf("Tich cua %d va %d = %d\n",a, b, a*b);
} 

double Thuong(int a, int b){
    //printf("Thuong cua %d va %d = %f\n",a, b, a%b);
    return (double)a/b;
} 

void ToanHoc(void (*ptr3)(int a, int b), int a, int b){
    printf("Chuong trinh toan hoc\n");
    ptr3(10, 5);
}

int x = 10;

int main(int argc, char const *argv[])
{
    // Khai báo con trỏ: Ký tự "*" + tên biến (VD: *ptr, *mm)
    int *ptr = &x;              // *ptr gọi là con trỏ interger: nó sẽ lưu được những địa chỉ mà giá trị của địa chỉ đó có kiểu dữ liệu là interger

    printf("Dia chi cua x: %p\n", &x);      // Ký tự "&" + biến x: chỉ địa chỉ của biến x trên thanh ghi
    printf("Dia chi cua ptr: %p\n", ptr);       // Khi sử dụng biến con trỏ chỉ cần gọi tên biến, không cần thêm dấu "*""
    printf("Gia tri cua ptr: %d\n\n", *ptr);      // Lấy giá trị tại địa chỉ đó của biến con trỏ



    // Con trỏ Void: Con trỏ void là 1 con trỏ đặc biệt. Nó có thể trỏ đến địa chỉ của tất cả các đôi tượng
    
    int m = 10;
    char n = "A";
    double p = 100.6;

    void *ptr1;

    ptr1 = &m;
    printf("Dia chi m: %p\n", ptr1);
    printf("Gia tri cua m: %d\n", *(int*)ptr1);     // Ép kiểu dữ liệu: ("Tên kiểu dữ liệu mong muốn" + "*") + Tên biến. VD (int*)ptr1, (double*)ptr 
    ptr1 = &n;
    printf("Dia chi n: %p\n", ptr1);
    printf("Gia tri cua n: %c\n", *(char*)ptr1); 
    ptr1 = &p;
    printf("Dia chi p: %p\n", ptr1);
    printf("Gia tri cua p: %f\n", *(double*)ptr1); 

    
    // Con trỏ Null: là con trỏ có địa chỉ và giá trị = 0

    // Con trỏ hàm: Con trỏ trỏ đến địa chỉ của một hàm

    void (*ptr2)(int, int); //Khai báo con trỏ hàm: Kiểu dữ liệu + ("*" + tên biến)(kiểu dữ liệu của hàm)

    ptr2 = &Tong;
    ptr2(10, 5);

    ptr2 = &Hieu;
    ptr2(10, 5);

    ptr2 = &Tich;
    ptr2(10, 5);

    double (*ptrThuong)(int, int) = &Thuong;        //ptrThuong = &Thuong;
    printf("Thuong = %f\n", ptrThuong(84, 13));
    

    ToanHoc(&Tong, 20, 10);
    
    ToanHoc(&Hieu, 20, 10);



    return 0;
}
