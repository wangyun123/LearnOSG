#ifndef _MY_LIST_H_
#define _MY_LIST_H_

#include <Windows.h>

typedef struct _NODE{
	int data;
	_NODE* pNext;
}NODE, *PNODE;

class List{
public:
	List();
	~List();

public:
	bool isEmpty();
	void clear();
	DWORD getElement(DWORD dwIndex, int& elem);
	DWORD getElementIndex(int& elem);
	DWORD find(int elem);	// ����ĳ������
	DWORD insert(DWORD dwIndex, int elem);	// ָ��λ�ò�������
	DWORD push_back(int elem);	// β����������
	DWORD pop_back();			// β��ɾ������
	DWORD remove(DWORD dwIndex);// ɾ��ָ������
	DWORD getSize();			// ��ȡ������

	void print();
private:
	PNODE getIndexCurNode(DWORD dwIndex);
	PNODE getIndexPrevNode(DWORD dwIndex);
	PNODE getIndexNextNode(DWORD dwIndex);
private:
	PNODE m_pListHead;
	DWORD m_dwLength;
};


#endif //_MY_LIST_H_