#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SLTest01()
{
	SL sl;
	//初始化
	SLInit(&sl);

	//尾插
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	//打印
	SLPrint(sl);

	//头插
	SLpushFront(&sl, 5);
	SLpushFront(&sl, 6);

	//打印
	SLPrint(sl);



	//删除最后一个元素
	SLPopBack(&sl);
	SLPrint(sl);

	//删除第一个元素
	SLPopFront(&sl);
	SLPrint(sl);

	//销毁地址
	SLDestory(&sl);
}

int main()
{
	SLTest01();
	return 0;
}