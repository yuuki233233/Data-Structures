#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SLTest01()
{
	SL sl;
	//��ʼ��
	SLInit(&sl);

	//β��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	//��ӡ
	SLPrint(sl);

	//ͷ��
	SLpushFront(&sl, 5);
	SLpushFront(&sl, 6);

	//��ӡ
	SLPrint(sl);



	//ɾ�����һ��Ԫ��
	SLPopBack(&sl);
	SLPrint(sl);

	//ɾ����һ��Ԫ��
	SLPopFront(&sl);
	SLPrint(sl);

	//���ٵ�ַ
	SLDestory(&sl);
}

int main()
{
	SLTest01();
	return 0;
}