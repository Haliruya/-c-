#include<stdio.h>
#include<string.h>
int main()
{
	char s1[5],s2[5],s3[5],s4[7];
	int sum, t, i;
	scanf("%4s%4s%4s", s1,s2,s3);
	printf("%s\n", s4);//
	while (strcmp(s2,"����") != 0) {
		scanf("%s", s4);
		/*�ж�s4�����仯���ľ���ֵ*/
		if (strcmp(s4, "��") == 0)t = 0;break;
		if (strcmp(s4, "һ") == 0)t = 1;break;
		if (strcmp(s4, "��") == 0)t = 2;break;
		if (strcmp(s4, "��") == 0)t = 3;break;
		if (strcmp(s4, "��") == 0)t = 4;break;
		if (strcmp(s4, "��") == 0)t = 5;break;
		if (strcmp(s4, "��") == 0)t = 6;break;
		if (strcmp(s4, "��") == 0)t = 7;break;
		if (strcmp(s4, "��") == 0)t = 8;break;
		if (strcmp(s4, "��") == 0)t = 9;break;
		if (strcmp(s4, "ʮ") == 0)t = 10;break;
		/*�����ж�s3�����Ӽ������ڵ��������*/
		if (strcmp(s3, "����"))sum = t;
		if (strcmp(s3, "����"))sum += t;
		if (strcmp(s3, "����"))sum -= t;
		/*���s4�����֣���������һ������*/
		for (i = 0;i < 7;i++)
			s4[i] = '\0';
		scanf("%4s%4s", s2, s3);
	}
	/*��sum��ֵת��Ϊ�����������ʱ������switch���������ж�ʮλ�����жϸ�λ��*/
	t = sum;
	switch (t / 10) {
	case 1:printf("ʮ");break;
	case 2:printf("��ʮ");break;
	case 3:printf("��ʮ");break;
	case 4:printf("��ʮ");break;
	case 5:printf("��ʮ");break;
	case 6:printf("��ʮ");break;
	case 7:printf("��ʮ");break;
	case 8:printf("��ʮ");break;
	case 9:printf("��ʮ");break;
	case 0:break;
	}
	switch (sum) {
	case 1:printf("һ");break;
	case 2:printf("��");break;
	case 3:printf("��");break;
	case 4:printf("��");break;
	case 5:printf("��");break;
	case 6:printf("��");break;
	case 7:printf("��");break;
	case 8:printf("��");break;
	case 9:printf("��");break;
	case 10:printf("ʮ");break;
	case 0:printf("��");break;
	}
	return 0;
}