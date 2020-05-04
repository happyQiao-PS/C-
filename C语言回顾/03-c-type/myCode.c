#include<stdio.h>
#include<string.h>
/*定义一个预编译的常量*/
#define PI 3.1415926

/*计算圆的面积*/
float area(float r){
    return PI*r*r;
}

/*计算字符串长度的代码*/
int len(char str[]){
    int i=0,num;
    while(1){
        if ((int)(str[i])!=0){
            i++;
        }else{
            num = i;
            break;
        }
    }
    printf("原始字符串是:%d\n",str[10]);
    return num;
}

void function01(){
    char a; 
    a = getchar();
    printf("%d",(int)a);
    getchar();
}

int main(void){
    /*自己实现一个字符串长度计算的代码函数*/
    char string1[40];
    scanf("%s",string1);/*输入了一个字符串并且存入了string的数组里面*/
    int num = len(string1);/*对string1进行长度的计算！*/
    printf("最终的长度是：%d\n",num);
    getchar();
    printf("请输入一个圆心的半径：");
    float row;
    scanf("%f",&row);/*输入一个数字*/
    printf("圆形的面积是：%.2f",area(row));
    function01();
    return 0;
}