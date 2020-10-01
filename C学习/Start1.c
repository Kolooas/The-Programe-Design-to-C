#include<stdio.h>

int main()
{
	int a,b,sum;
	printf("输入两个整型数字，用空格隔开!\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d\n",sum);
	/*比较最大值*/
	int c,d,e,max;
	scanf("%d %d %d",&c,&d,&e);
	if(c>d){
		max=c;
	}
	else{
		max=d;
	}
	if(max<e){
		max=e;
	}
	printf("max=%d",max);
	return 0;
}

