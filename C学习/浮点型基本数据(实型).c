#include<stdio.h>
#include<float.h>//这个是获取float的取值范围的
#include<math.h>
int main(){
	/*浮点型常量表示方法
	1.由数字和小数点组成
	2.用指数形式:例如48.62X10^-12  可以表示为48.62e-12或者是48.62E-12(这里的e或E代表的是基数10)
	3.用e来表达 e的前面要有数字，e的后面的指数需要是整型*/
	//float 有效数字位为7
	//double 有效数字为16  占位符为%lf
	printf("sizeof(float):%d",sizeof(float));//获取float数据类型的字节数
	//在C中任何常量小数都是double类型的
	//测试
	float a = 0.1;
	printf("%f\n", a);
	printf("%0.16f", a);

	//浮点数比较
	flaot a=0.1,b=1.1,c=1.2;
	if(fabs(a+b-c)<FLT_EPSILON){//这里的FLT_EPSILON代表的是float最小精度
		printf("this is Equal");
	}

	/*各种常量的后缀
	整数:123L,123l代表的是long
	123U,123u代表的是unsigned int 
	实数：12.3f,12.3F,1.23e1f,1.23e1F代表的是float
	12.3l,12.3L,1.23e1l,1.23e1L 代表的是double*/
	return 0;
}