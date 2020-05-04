#include<stdio.h>
/*求出阶乘的代码函数在这里*/
int jiecheng(int num)
{  
    if(num>2)
    {
        int start=1,endend=2;
        while(endend<=num)
        {
            start = start*endend;
            endend++;
        }
        return start;
    }else
    {
        return 0;
    }
}
float test2(float num){/*C语言中的函数头部必须申明返回值的类型！警告错误*/
    /*计算1-1/2+1/3-1/4+1/5.........1/num*/
    float sign,sum;
    sign = -1;
    sum = 0.0;
    for(float i=1;i<=num;i++)
    {
        sign *= -1;
        sum += sign*(1/i);
    }
    // printf("this is the sum %f !!!\n",sum);/*sum是按照完全正常的状态返回数据的*/
    return sum;
    
}
// 主函数
int main()
{
    float num,answer;
    scanf("%f",&num);
    // int answer = jiecheng(num);/*阶乘算法*/
    answer = test2(num);
    printf("The Answer is %f",answer);
    getchar();
    return 0;
}
