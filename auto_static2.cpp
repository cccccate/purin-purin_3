//�ļ�����auto_static
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ������̬����

#include<stdio.h>

void test02()
{
	static int a = 0;
	a++;
	printf("a=%d\n",a);
}

int main002()
{
	int i;
	for (i = 0;i<10;i++)
	{
		test02();
	}
	return 0;
}
/*���
a=1
a=2
a=3
a=4
a=5
a=6
a=7
a=8
a=9
a=10
*/