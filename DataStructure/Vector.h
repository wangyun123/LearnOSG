#ifndef _MY_VECTOR_H_
#define _MY_VECTOR_H_

#include <Windows.h>

class Vector{
public:
	Vector();
	Vector(DWORD dwSize);
	~Vector();

public:
	void at(DWORD dwIndex, int* pEle);
	void push_back(int elem);
	void pop_back();
	void insert(DWORD dwIndex, int elem);
	void erase(DWORD dwIndex);
	
	void clear();
	bool empty();
	DWORD size();
	void capacity();

	void print();
private:
	void expend();

private:
	DWORD m_dwIndex;	//��ǰ������
	DWORD m_dwLength;	//��ǰ���鳤��
	DWORD m_dwInitLen;	//��ʼ�����鳤��
	DWORD m_dwIncrement;//Ĭ�����ݳ���

	int* m_pVecotr;		//����ָ��
};
#endif //_MY_VECTOR_H_