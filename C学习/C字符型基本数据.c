#include<stdio.h>
int main()
{
	char a='A';
	/*char是有符号的  可以代表的最大数值为127*/
	//测试
	char c = 254;
	unsigned char c2 = 254;
	printf("%d  %c\n", c, c);
	printf("%u  %c", c2, c2);
	/*转义字符
	可以输入键盘上面没有的字符
	避免混淆C语言语法规则中已经明确过的字符
	可以表达一些控制字符*/
	printf("\a\007\x7\x07\7\007\a\07\a");
	//记住转义字符的一句话
	/*哦(\o)，那(\n)天(\t)，别(\b)人(\r)拿着微(\v)型单(\)反(\f)成双(\")成对(\\)游西湖(\xh)啊(\a)*/
	//测试
	int n = printf("ab'1'\\\12803");
	printf("\n");
	printf("字符串的个数为%d个\n", n);
	printf("%%");
	return 0;
}