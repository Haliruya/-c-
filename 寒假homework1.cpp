#include<stdio.h>
#include<string.h>
int main()
{
	char s1[5],s2[5],s3[5],s4[5];
	int sum,t,i;
	scanf("%4s%4s%4s",s1,s2,s3);
	while(strcmp(s2,"����")!=0){
		scanf("%s",s4);
	/*�ж�s4�����仯���ľ���ֵ*/
		if(strcmp(s4,"��")==0)t=0;
		if(strcmp(s4,"һ")==0)t=1;
		if(strcmp(s4,"��")==0)t=2;
		if(strcmp(s4,"��")==0)t=3;
		if(strcmp(s4,"��")==0)t=4;
		if(strcmp(s4,"��")==0)t=5;
		if(strcmp(s4,"��")==0)t=6;
		if(strcmp(s4,"��")==0)t=7;
		if(strcmp(s4,"��")==0)t=8;
		if(strcmp(s4,"��")==0)t=9;
		if(strcmp(s4,"ʮ")==0)t=10;
	/*�����ж�s3�����Ӽ������ڵ��������*/	
		if(strcmp(s3,"����")==0)sum=t;
		if(strcmp(s3,"����")==0)sum+=t;
		if(strcmp(s3,"����")==0)sum-=t;
	/*���s4�����֣���������һ������*/
	    for(i=0;i<7;i++){
	    	s4[i]='\0';
	    }
		scanf("%4s%4s",s2,s3); 
	}
	/*��sum��ֵת��Ϊ�����������ʱ������switch���������ж�ʮλ�����жϸ�λ��*/
	if(sum<0)printf("Ƿծ�ˣ�");
	else if(sum>99)printf("����һ��Ԫ��������Ϊ��TAT"); 
	else{
		t=sum;
		switch(t/10){
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
		switch(sum%10){
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
		}
	}
	return 0;
}
