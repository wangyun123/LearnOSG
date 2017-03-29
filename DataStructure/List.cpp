#include "List.h"

List::List() 
	: m_pList(NULL),m_dwLength(0)
{

}
~List()
{
	clear();
}
bool List::isEmpty()
{
	return false;
}
void List::clear()
{
	// 判断链表是否为空
	if (isEmpty()) return;
	// 循环遍历链表中所有节点
	PNODE pt = m_pList;
	while (pt!=NULL)
	{
		//printf("%d\n", pt->data);
		pt = pt->pNext;
	}
	// 删除最后一个节点并将链表长度置为0

}
DWORD List::getElement(DWORD dwIndex, int& elem)
{
	return 0;
}
DWORD List::getElementIndex(int& elem)
{
	return 0;
}
DWORD List::insert(DWORD dwIndex, int elem)
{
	return 0;
}
DWORD List::push_back(int& elem)
{
	PNODE node = (PNODE)malloc(sizeof(NODE));
	node->data = elem;


	return 0;
}
DWORD List::pop_back()
{
	return 0;
}
DWORD List::remove(DWORD dwIndex)
{
	return 0;
}
DWORD List::getSize()
{
	return 0;
}

void List::print()
{
	// 判断链表是否为空
	if (isEmpty()) return;
	// 循环遍历链表中所有节点
	PNODE pt = m_pList;
	while (pt!=NULL)
	{
		printf("%d\n", pt->data);
		pt = pt->pNext;
	}
}

PNODE List::getIndexCurNode(DWORD dwIndex)
{
	return NULL;
}
PNODE List::getIndexPrevNode(DWORD dwIndex)
{
	return NULL;
}
PNODE List::getIndexNextNode(DWORD dwIndex)
{
	return NULL;
}
