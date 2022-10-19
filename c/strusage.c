//此程序得到字符串的一个关键字的左侧内容
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char str1[] = "abc";
	char str2[] = "abcd";
	char s[] = "hello";//创建一个字符串，大小为6bit
	char *p = strchr(s, 'l');//创建一个指针，使其指向字符串s中从左开始的第一个l所在的地址
	char c = *p;//临时保存*p所指向位置的字符l
	*p = '\0';//替换*p所指向位置的字符为终止符'\0'，使字符串s在此处结束
	char *t = (char*)malloc(strlen(s)+1);/*创建一个新指针，使用malloc动态分配内存
					       分配的字节数为s的字符部分长度+1(为了最后的'\0')
					       */
	strcpy(t, s);//复制s中的内容到t。注意字符串本身就是一种指针
	printf("%s\n", t);//%s是输出字符串内容
	free(t);//释放之前使用malloc分配的内存
	
	printf("%d\n", strcmp(str1,str2));/*strcmp函数用于比较字符串大小，比较的结果是str1-str2。
					    此处str2比str1多了一个字符'd'，其ASCII码为100，所以
					    得到的结果为-100
					    */
	printf("%d\n", 0-'d');//效果同上

	return 0;
}
