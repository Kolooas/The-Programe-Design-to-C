#include<studio.h>
#define PRICE 30 /*自定义的符号常量*/
int main(){
	int const price=30;/*这里的price和上面的PRICE虽然都是在程序的其他地方不可以改动
	但是两个本质上是由区别的，price是变量，而PRICE是常量*/

	/*两个整数进行互换 但是不使用第三方进行*/
	int a=3,b=20;
	b = b - a;
	a = b + a;
	b = a - b;
	printf("a=%d b=%d",a,b);
	return 0
}