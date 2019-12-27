//[题号:10][出题人:jiang035]
//输入一个十进制的整数，将其转换成八进制数输出
//题目描述
//输入一个十进制的整数，将其转换成八进制数输出。

//输入格式
//输入一个整数n(0<=N<=100，程序中不对n的输入进行验证)。

//输出
//输出n的八进制表示数。


#include"stdio.h"

int main()
{
    int x,m,p;
    printf("please input n:");
    scanf("%d",&x);
    printf("Output:\n");
    m=x%8;
    p=x/8;
    if (p==0)
        printf("%d\n",m);
    else
        printf("%d%d\n",p,m);

}
