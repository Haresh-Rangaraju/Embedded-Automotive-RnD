#include<stdio.h>
struct car{
    int speed;
    float temperature;
    char status;
};
int main(){
    struct car c1;
    c1.speed=60;
    c1.temperature=36.5;
    c1.status='A';
    printf("speed=%d\n",c1.speed);
    printf("temperature=%f\n",c1.temperature);
    printf("status=%c\n",c1.status);
    struct car cars[2];
    cars[0].speed=50;
    cars[1].speed=80;
    printf("%d\n",cars[0].speed);
    printf("%d\n",cars[1].speed);
    struct car *p=&c1;
    printf("%d\n",p->speed);
    printf("%f\n",p->temperature);
    printf("%c\n",p->status);
    return 0;
}