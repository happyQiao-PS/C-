# 字符串复习

- C语言里面没有完整的字符串这个类型，所以我们需要使用数组来存放字符串数据类型。

## 字符串的定义

```C
#include<stdio.h>
#include<string.h>/*这里这个包为下面的strlen埋下伏笔*/

// 主函数
int main(void){
    char str1[30] = "helloworld";//这里实现了一个字符串的选定
    printf("你的字符串是：%s",str1);
    getchar();
    printf("这里需要输入一个数据了！\n");
    //测量字符串的长度
    int str_len = strlen(str1);
    printf("这个字符串的长度是：%d\n",str_len);//借助strlen函数来获取字符串的长度！
    getchar();
    return 0;
}
```

- 字符串定义的时候是使用了char类型的数组来保存数据的。如果我们想要获取到数组字符串的长度的话，我们可以导入`#include<string.h>`这个包，然后我们可以调用strlen这个方法来获取长度。

## 常量的定义以及使用

```C
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
```
