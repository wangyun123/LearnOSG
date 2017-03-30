#include "List.h"
#include <stdio.h>

List::List() 
	: m_pListHead(NULL),m_dwLength(0)
{

}
List::~List()
{
	clear();
}
bool List::isEmpty()
{
	if (m_pListHead==NULL||m_dwLength==0)
		return true;
	else
		return false;
}
void List::clear()
{
	// �ж������Ƿ�Ϊ��
	if (isEmpty()) return;
	// ѭ���������������нڵ�
	PNODE pt;
	while (m_pListHead!=NULL)
	{
		pt = m_pListHead->pNext;
		free(m_pListHead);
		m_pListHead = pt;
	}
}
DWORD List::find(int elem)	// ����ĳ������
{
	// �ж������Ƿ�Ϊ��
	if (isEmpty()) return-1;
	// ѭ���������������нڵ�
	PNODE pt = m_pListHead;
	while (pt->pNext != NULL)
	{
		if (pt->data == elem)
			return 0;
		pt = pt->pNext;
	}
	return -1;
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
DWORD List::push_back(int elem)
{
	PNODE node = (PNODE)malloc(sizeof(NODE));
	memset(node,0,sizeof(NODE));
	memcpy(&node->data, &elem, sizeof(int));
	node->pNext = NULL;
	
	PNODE pt;
	if (isEmpty())
	{
		// �������Ϊ��
		m_pListHead = node;
		m_dwLength++;
	}
	else
	{
		// �������Ϊ��
		// ���������ҵ����һ���ڵ�
		pt = m_pListHead;
		while(pt->pNext != NULL)
		{
			pt = pt->pNext;
		}
		pt->pNext = node;
	}

	return 0;
}
DWORD List::pop_back()
{
	PNODE pt;
	if (isEmpty())
	{
		m_pListHead = NULL;
		m_dwLength = 0;
		return 0;
	}
	else
	{
		// �������Ϊ��
		// ���������ҵ����һ���ڵ�
		pt = m_pListHead;
		while(pt->pNext != NULL)
		{
			if (pt->pNext->pNext == NULL)
			{
				free(pt->pNext);
				pt->pNext = NULL;
				break;
			}
			pt = pt->pNext;
		}
	}

	return 0;
}
DWORD List::remove(DWORD dwIndex)
{
	return 0;
}
DWORD List::getSize()
{
	PNODE pt;
	if (isEmpty())
	{
		// �������Ϊ��
		return 0;
	}
	else
	{
		// �������Ϊ��
		// ���������ҵ����һ���ڵ�
		int nSize=0;
		pt = m_pListHead;
		while(pt->pNext != NULL)
		{
			pt = pt->pNext;
			nSize++;
		}
		return nSize;
	}
}

void List::print()
{
	// �ж������Ƿ�Ϊ��
	if (isEmpty()) return;
	// ѭ���������������нڵ�
	PNODE pt = m_pListHead;
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
