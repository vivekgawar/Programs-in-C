#include<stdio.h>
typedef struct vector
{
    int x;
    int y;
}vec;

int main()
{
    int a,b,c,d;
    printf("VECTOR IS REPRESENTED AS: xi + yj\n");
    printf("Enter value of x for v1:");
    scanf("%d",&a);
    printf("Enter value of y for v1:");
    scanf("%d",&b);
    printf("Enter value of x for v2:");
    scanf("%d",&c);
    printf("Enter value of y for v2:");
    scanf("%d",&d);

    vec v1 = {a,b};
    vec v2 = {c,d};

    printf("sum of vector v1 + v2 is: %di + %dj\n",v1.x+v2.x,v1.y+v2.y);

}
