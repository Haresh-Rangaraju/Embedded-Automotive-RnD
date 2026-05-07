#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    printf("value of a:%d\n",a);
    printf("adress of a:%p\n",&a);
    printf("adress using ponter:%p\n",p);
    printf("value using pointer:%d\n",*p);
    *p=20;
    printf("new value:%d",a);
    int arr[3]={1,2,3};
    int *q=arr;
    printf("%d\n",*q);
    printf("%d\n",*(q+1));
    printf("%d\n",*(q+2));
    return 0;
}