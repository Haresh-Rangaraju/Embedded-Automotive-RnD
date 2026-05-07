#include<stdio.h>
int main(){
    int a=10;
    float b=5.5;
    char c='A';
    printf("Integer=5d\n",a);
    printf("Float=%f\n",b);
    printf("Char=%c\n",c);
    printf("Size of a:%zu bytes\n",sizeof(a));
    printf("Size of b:%zu bytes\n",sizeof(b));
    printf("Size of c:%zu bytes\n",sizeof(c));
    return 0;
}
