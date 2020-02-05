#include<stdio.h>
#include<string.h>
int main()
{
	char s1[5],s2[5],s3[5],s4[7];
	int sum, t, i;
	scanf("%4s%4s%4s", s1,s2,s3);
	printf("%s\n", s4);//
	while (strcmp(s2,"看看") != 0) {
		scanf("%s", s4);
		/*判断s4，即变化量的绝对值*/
		if (strcmp(s4, "零") == 0)t = 0;break;
		if (strcmp(s4, "一") == 0)t = 1;break;
		if (strcmp(s4, "二") == 0)t = 2;break;
		if (strcmp(s4, "三") == 0)t = 3;break;
		if (strcmp(s4, "四") == 0)t = 4;break;
		if (strcmp(s4, "五") == 0)t = 5;break;
		if (strcmp(s4, "六") == 0)t = 6;break;
		if (strcmp(s4, "七") == 0)t = 7;break;
		if (strcmp(s4, "八") == 0)t = 8;break;
		if (strcmp(s4, "九") == 0)t = 9;break;
		if (strcmp(s4, "十") == 0)t = 10;break;
		/*下面判断s3，即加减，等于的运算符号*/
		if (strcmp(s3, "等于"))sum = t;
		if (strcmp(s3, "增加"))sum += t;
		if (strcmp(s3, "减少"))sum -= t;
		/*清空s4（数字）后输入下一组数据*/
		for (i = 0;i < 7;i++)
			s4[i] = '\0';
		scanf("%4s%4s", s2, s3);
	}
	/*将sum的值转化为汉字输出，此时可以用switch操作，先判断十位数再判断个位数*/
	t = sum;
	switch (t / 10) {
	case 1:printf("十");break;
	case 2:printf("二十");break;
	case 3:printf("三十");break;
	case 4:printf("四十");break;
	case 5:printf("五十");break;
	case 6:printf("六十");break;
	case 7:printf("七十");break;
	case 8:printf("八十");break;
	case 9:printf("九十");break;
	case 0:break;
	}
	switch (sum) {
	case 1:printf("一");break;
	case 2:printf("二");break;
	case 3:printf("三");break;
	case 4:printf("四");break;
	case 5:printf("五");break;
	case 6:printf("六");break;
	case 7:printf("七");break;
	case 8:printf("八");break;
	case 9:printf("九");break;
	case 10:printf("十");break;
	case 0:printf("零");break;
	}
	return 0;
}