#include<stdio.h>
/*常用的7种算术运算符
加减乘除正负号求余
求余运算符两边，必须为整型，同时余数的符号与被除数同号
除法运算符中，除数与被除数异号时，伤向零方向取整*/
int main()
{
	int a,b;
	a=-5/3;
	b=5/-3;
	printf("a=%d b=%d\n",a,b);

	/*强制类型转换运算符*/
	/*自增自减运算符
	这个运算符的出现是为了效率问题*/
	int i = 1,j,k;
	j = ++i;//先自增1再赋值
	i--;
	k = i++;//先赋值再自增1
	printf("j=%d\n", j);
	printf("k=%d", k);
	/*赋值运算符
	复合赋值运算符是为了提高执行效率*/
	int a=4, b=5;
	a = (a + b) + (a = b);
	printf("a=%d", a);
	/*逗号表达式
	作用：*/
	int a=4, b=5,c,d;
	c = a, b;
	d = (a, b);
	printf("c=%d\n d=%d", c,d);

	int e = 3, f;
	f = (e++, e);
	printf("f=%d", f);
	/*空白符：空格键、回车键、Tab键*/
	return 0;
}