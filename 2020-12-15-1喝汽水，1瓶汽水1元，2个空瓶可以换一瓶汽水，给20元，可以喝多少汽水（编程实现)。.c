//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现)。//其实有规律如2*money-1
#include<stdio.h>
int main()
{
	int n = 0;//表示多少钱
	int sum = 0;//总共喝多少瓶
	int k = 0;//表示空瓶
	printf("给多少钱：");
	scanf("%d",&n);
	sum = n;
	k = n;
	while (k>1)
	{
		sum += k / 2;//计算总瓶数
		k = k / 2 + k % 2;//两瓶换一瓶
		
	
	}
	printf("可以喝%d瓶汽水\n",sum);
	return 0;
}