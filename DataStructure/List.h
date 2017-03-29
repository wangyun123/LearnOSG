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
	DWORD insert(DWORD dwIndex, int elem);
	DWORD push_back(int& elem);
	DWORD pop_back();
	DWORD remove(DWORD dwIndex);
	DWORD getSize();

	void print();
private:
	PNODE getIndexCurNode(DWORD dwIndex);
	PNODE getIndexPrevNode(DWORD dwIndex);
	PNODE getIndexNextNode(DWORD dwIndex);
private:
	PNODE m_pList;
	DWORD m_dwLength;
};


#endif //_MY_LIST_H_