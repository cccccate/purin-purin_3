//�ļ�����calloc_realloc
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����calloc��realloc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *s1 = calloc(10,sizeof(char));//�ڶ��з���10��char
	char *s2 = calloc(10,sizeof(char));
	strcpy(s1,"123456789");
	strcpy(s2,"abcdefg");
	s1 = realloc(s1,strlen(s1)+strlen(s2)+1);//�ȸ���s1��s2�ĳ��ȶ�s1��������
	strcat(s1,s2);
	printf("%s\n",s1);
	free(s1);
	free(s2);
	return 0;
}