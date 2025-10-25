#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//˳���ĳ�ʼ��
void SLInit(SL* s)
{
	s->arr = NULL;
	s->size = s->capecity = 0;
}

//�ж��ڴ湻����
void SLCheckCapacity(SL* ps)
{
	if (ps->capecity == ps->size)
	{
		//��һ���������Ϊ0
		//����Ŀ�����
		int NewCapecity = ps->capecity == 0 ? 4 : ps->capecity * 2 * sizeof(SLDataType);

		//�ڶ���������ռ䲻��
		//�����¿ռ䣬tmp������
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, NewCapecity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		//�ռ�����ɹ�
		ps->arr = tmp;
		ps->capecity = NewCapecity;
	}
}

//ͷ��
void SLpushFront(SL* ps, SLDataType x)
{
	//�ж��Ƿ�Ϊ��ָ��
	assert(ps);

	//�ж��ڴ湻����
	SLCheckCapacity(ps);

	//�����Ųһλ
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//arr[1] = arr[0]
	}
	ps->arr[0] = x;
	ps->size++;
}

//ɾ����һ��Ԫ��
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);//��ֹ�ձ�ɾ����ֱ�ӱ������ѣ�

	//�ӵڶ���Ԫ�ؿ�ʼ��������ǰŲ��һλ�����ǵ�һ��Ԫ��
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	//��ЧԪ�ؼ�1
	ps->size--;
}


//β��
void SLPushBack(SL* ps, SLDataType x)
{
	//�ж��Ƿ�Ϊ��ָ��
	assert(ps);

	//�ж��ڴ湻����
	SLCheckCapacity(ps);

	//β����
	ps->arr[ps->size++] = x;
}

//ɾ�����һ��Ԫ��
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);

	//��ЧԪ�ؼ�1������Ŀռ��൱�ڡ�������
	ps->size--;
}

//˳��������
void SLDestory(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capecity = 0;
}

//��ӡ˳���
void SLPrint(SL sp)
{
	for (int i = 0; i < sp.size; i++)
	{
		printf("%d ", sp.arr[i]);
	}
	printf("\n");
}