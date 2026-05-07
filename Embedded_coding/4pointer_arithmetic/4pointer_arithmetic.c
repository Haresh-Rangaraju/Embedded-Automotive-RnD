#include<stdio.h>
int main(){
    int arr[3]={1,2,3};
    int *p=arr;
    printf("adress p:%p\n",p);
    printf("adress p+1:%p\n",p+1);
    printf("adress p+2:%p\n",p+2);
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    *(p+1)=100;
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",*(p+2));
    return 0;
}