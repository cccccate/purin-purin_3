//�ļ�����dui
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����ͨ���ѿռ�ʵ�ֶ�̬��С�仯���ַ�����

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[] = "21874628764284781358341";
	char b[] = "1dhiufhilaesbcaierhnoidbv";
	char *s = malloc(strlen(a)+strlen(b)+1);
	strcpy(s,a);
	strcpy(s,b);
	printf("%s\n",s);
	free(s);
	return 0;
}