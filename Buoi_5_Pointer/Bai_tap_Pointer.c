#include <stdio.h>

int Tong(int a, int b){
    printf("Tong cua %d va %d = %d\n",a, b, a+b);
}

int Hieu(int a, int b){
    printf("Hieu cua %d va %d = %d\n",a, b, a-b);
}

void Tich(int a, int b){
    printf("Tich cua %d va %d = %d\n",a, b, a*b);
} 

void ToanHoc(void (*ptr3)(int a, int b), int a, int b){
    printf("Chuong trinh toan hoc\n");
    ptr3(a, b);
}

int main(int argc, char const *argv[])
{
    double d = 10.3;
    char string[5] = "Hello";

    printf("%s\n", string);

    void *array[] = {&ToanHoc, &d, string};

    void **p_to_p = array;

    printf("Gia tri d: %f\n", *(double*)(array[1]));

    printf("Chuoi: %s\n", *(char*)((p_to_p[2])));

    //char *ptr = &(array[2]);
    //printf("Chuoi: %s\n", *ptr);

    //ToanHoc(&Hieu, 20, 10);
    //printf("Chuong trinh toan hoc: %d\n", *(int*)(&(array[0])));
    return 0;
}
