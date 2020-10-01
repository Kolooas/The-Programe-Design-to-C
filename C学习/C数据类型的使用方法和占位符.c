/*各种数据类型的使用方法和占位符*/
/*利用limits.h 宏定义:整型的取值范围*/
#include<stdio.h>
#include<limits.h>
int main(){
	int a;
	unsigned int b;
	short c;
	int ave;
	unsigned int e;/*无符号的整型数据*/

	_int64 f;/*如果编译器不支持long long 的数据类型的时候，可以使用这种方法或者是下面的那种方法*/
	unsigned _int64 g;

	scanf("%d%u%d",&a,&b,&c);
	printf("a=%d\n b=%u\n c=%d\n",a,b,c);

	printf("%d ~ %d",INT_MIN,INT_MAX);//查看int数据类型的取值范围

	printf("%d\n", &ave);/*没有赋值的整型变量 里面含有垃圾数*/

	printf("sizeof(int)=%d\n", sizeof(int));/*sizeof代表的是查找当前编译器中的数据类型的字节数*/
}