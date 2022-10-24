//%[flag][width][.prec][hIL]type
/*
flag    含义
-       左对齐
+       为正数时强制输出加号
(space) 正数留空
0       0填充
*/
/*
width或prec 含义
number      最少输出的字符数。在输出浮点时.也算字符
*           下一个参数是字符数
.number     小数点后的位数
*/
/*
修饰符  含义
hh      单个字节
h       short
l       long
ll      long long
L       long double
*/
/*
%n作用是检测当printf运行到%n时
已经输出了多少数值，并将值存到变量里
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int num;
    printf("%9d\n", 123);/*9意思是输出占据9个字符
                        ，无其他参数，则使用右对齐
                        */
    printf("%-9d\n", 123);//加了-则是使用左对齐
    printf("%09d\n", 123);//使用0填充中间空出的位置
    printf("%09.2f\n",128.2);/*会输出000128.20
                                一共9个字符
                                */
    printf("%*d\n", 6,123);/* *表示参数6被用作%的参数
                            效果与使用%6d相同
                            */    
    printf("%dtty%n\n",12345,&num);//num应该输出8
    printf("%d\n",num);//not usable in windows, idk
}