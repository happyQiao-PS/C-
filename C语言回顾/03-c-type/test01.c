#include<stdio.h>
#include<string.h>

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