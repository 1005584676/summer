#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
typedef struct MarketGoods
{
	int goods_id;//��Ʒ����
	char goods_name[40];//��Ʒ��
	double goods_price;//��Ʒ����
	int goos_amount;//��Ʒ���(����)
}MG;
void splash()//��ӭ����
{
	int i;
	system("color 3f");
	system("title �����Ʒ�ϵͳ");
	printf("=====================================================\n");
	printf("-----------------------------------------------------\n\n");
	printf("\t\t��ӭʹ�ó��������Ʒ�ϵͳ\n\n");
	printf("-----------------------------------------------------\n");
	printf("=====================================================\n\n");
	Sleep(500);
	printf("\t\t������.");
	for(i=0;i<30;i++)
	{
		printf(".");
		Sleep(100);
	}
	system("cls");
}
void login()//��¼
{
	char admin[]={"root"},adminw[10];
	char pass[]={"admin"},passw[10];
	printf("����������˺�:");
	scanf("%s",adminw);
	printf("�������������:");
	scanf("%s",passw);
	while(!(strcmp(admin,adminw)==0&&strcmp(pass,passw)==0))
	{
		printf("�˺Ż����������������������.\n");
		Sleep(1800);
		system("cls");
		printf("�˺�:");
		scanf("%s",adminw);
		printf("����:");
		scanf("%s",passw);
	}
	printf("��¼�ɹ�\n");
	system("pause");
	system("cls");

}
void input()//¼����Ʒ��Ϣ
{
	system("pause");
	system("cls");
}
void look()//�鿴��Ʒ��Ϣ
{
	char file[] = "data.ini";
	FILE *fp;
	fp = fopen(file, "w");
	if(fp==NULL)
	{
		printf("û������");
	}
	else
	{
		fscanf(fp,"%s",*file);
	}
	system("pause");
	system("cls");
}
void buy()//��������
{

}
void print()//��ӡСƱ
{

}
void main()
{
	int s;
	splash();
	login();
	do{
		printf("\n\n\t\t��ѡ��һ����Ϊ��Ĳ���:\n\n");
		printf("\t\t1.¼����Ʒ��Ϣ\n\n");
		printf("\t\t2.�鿴��Ʒ��Ϣ\n\n");
		printf("\t\t3.����\n\n");
		printf("\t\t0.�˳�ϵͳ\n\n\t\t���ѡ��:");
		scanf("%d",&s);
		switch(s)
		{
		case 1:system("cls");input();break;
		case 2:system("cls");look();break;
		case 3:system("cls");buy();break;
		}
	}while(s!=0);
}