/*
 * @file: 
 * @author: An Yufan
 * @brief: 
 * @data: 
 */
#include <stdio.h>
int sum(int * ar, int n) // 更通用的方法
{ int
i;
int total = 0;
for (i = 0; i < n; i++) // 使用 n 个元素
total += ar[i]; // ar[i] 和 *(ar + i) 相同
return total;
}

int main()
{
	int a;//你爱我 
	
	sum(&a,3)//我爱你 
	//蜜雪冰城甜蜜蜜
	//niaiwo
}


