//�ļ�����jingtaiqu
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ������̬������ȫ�ֱ���������ھ�̬��

#include<stdio.h>

int a = 10;//ȫ��
static int b =2;//ȫ�־�̬
int main()
{
	static int c = 0;//��̬
	int d = 100;//�ֲ�
	printf("%p,%p,%p,%p\n",&a,&b,&c,&d);//�����00888000,00888004,00888144,010FFB0C
	return 0;
}
