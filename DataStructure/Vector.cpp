#include "Vector.h"
#include <stdio.h>

Vector::Vector()
{
	m_dwIndex = 0;		//��ǰ������
	m_dwLength = 0;		//��ǰ���鳤��
	m_dwInitLen = 5;	//��ʼ�����鳤��
	m_dwIncrement = 5;	//Ĭ�����ݳ���

	m_pVecotr = (int*)malloc(sizeof(int)*m_dwInitLen);		//����ָ��
	memset(m_pVecotr,0,sizeof(int)*m_dwInitLen);
}
Vector::Vector(DWORD dwSize)
{
	m_dwIndex = 0;			//��ǰ������
	m_dwLength = dwSize;	//��ǰ���鳤��
	m_dwInitLen = dwSize;	//��ʼ�����鳤��
	m_dwIncrement = 5;		//Ĭ�����ݳ���

	m_pVecotr = (int*)malloc(sizeof(int)*dwSize);		//����ָ��
}
Vector::~Vector()
{
	free(m_pVecotr);
}

void Vector::print()
{
	for(DWORD i=0; i<m_dwIndex; i++)
	{
		printf("%d: %d\n", i, m_pVecotr[i]);
	}
}
void Vector::at(DWORD dwIndex, int* pEle)
{

}
void Vector::push_back(int elem)
{
	// �����ǰ�ռ䲻����������
	if (m_dwIndex<0 || m_dwIndex>=m_dwLength)
	{
		expend();
	}

	m_pVecotr[m_dwIndex++] = elem;
// 	m_dwIndex++;
}
void Vector::pop_back()
{

}
void Vector::insert(DWORD dwIndex, int elem)
{

}
void Vector::erase(DWORD dwIndex)
{

}

void Vector::clear()
{

}
bool Vector::empty()
{
	return true;
}
DWORD Vector::size()
{
	return 0;
}
void Vector::capacity()
{

}
void Vector::expend()
{
	m_dwLength += m_dwIncrement; 
	int* ptmp = (int*)malloc(sizeof(int)*m_dwLength);
	memset(ptmp,0,sizeof(int)*m_dwLength);
	memcpy(ptmp,m_pVecotr,sizeof(int)*m_dwLength);
	free(m_pVecotr);
	m_pVecotr = ptmp;
	ptmp = NULL;
}
