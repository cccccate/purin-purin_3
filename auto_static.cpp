//�ļ�����auto_static
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����Զ�����

#include<stdio.h>

void test()
{
	int a = 0;
	a++;
	printf("a=%d\n",a);
}

int main001()
{
	int i;
	for (i = 0;i<10;i++)
	{
		test();
	}
	return 0;
}

/*���
a=1
a=1
a=1
a=1
a=1
a=1
a=1
a=1
a=1
a=1
*/