#pragma once
#include "List.h"				//���������� �����-��������?

class CyList:public List		//����� CyList ���������� �� ������ List
{
public:
	CyList();					//����������� �� ���������
	void add(Time *);			//����� ���������� �������� Time
	Time * remove(int);			//����� �������� �� �������. ���������� ��������� �� ��������� �������
	Time * remove(Time *);		//����� �������� �� �����������. ���������� ��������� �� ��������� �������	
};
/*
������:
List * p = new List();
CyList * q = new CyList();
p=q;

*/

