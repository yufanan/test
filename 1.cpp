#include <stdio.h>
int sum(int * ar, int n) // ��ͨ�õķ���
{ int
i;
int total = 0;
for (i = 0; i < n; i++) // ʹ�� n ��Ԫ��
total += ar[i]; // ar[i] �� *(ar + i) ��ͬ
return total;
}

int main()
{
	int a;//�㰮�� 
	
	sum(&a,3)
}


