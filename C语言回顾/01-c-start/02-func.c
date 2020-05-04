#include<stdio.h>

/*函数需要放在主函数前面不然程序不认*/

// 加法函数
int add(int num1,int num2)
{
    return num1+num2;
}
// 主函数申明
int main()
{
    int num1,num2,sum;/*定义变量*/
    num1 = 10;
    num2 = 20;
    sum = add(num1,num2);
    printf("sum:%d\n",sum);
    getchar();/*程序输出结果之后不会结束，而是等待你按下任意键结束*/
    return 0;
}
