#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//����˳���Ľṹ

//#define N 100
//
////��̬˳���
//struct SeqList
//{
//	int arr[N];
//	int size;//��Ч�������
//};

typedef int SLDataType;
//��̬˳���
typedef struct SeqList
{
	int* arr;
	int size;//��Ч���ݸ���
	int capecity;//�ռ��С
}SL;

//typedef struct SeqList SL;

//�ж��ڴ湻����
void SLCheckCapacity(SL* ps);

//��ʼ��
void SLInit(SL* ps);

//��������
void SLPushBack(SL* ps, SLDataType x);

//ͷ��
void SLpushFront(SL* ps, SLDataType x);

//���ٵ�ַ
void SLDestory(SL* ps);

//��ӡ˳���
void SLPrint(SL ps);

//ɾ����һ��Ԫ��
void SLPopFront(SL* ps);


//ɾ�����һ��Ԫ��
void SLPopBack(SL* ps);