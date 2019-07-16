#pragma once
#include "component.h"

/********** ��������ϣ����ȣ�**********/

// �ڿ��ȣ����ڻ�Ͽ���
class HouseBlend : public IBeverage
{
public:
	string Name() {
		return "HourseBlend";
	}
	double Cost() {
		return 30.0;
	}
};

// ��Ⱥ��࿧�ȶ�
class DarkRoast : public IBeverage
{
public:
	string Name() {
		return "DarkRoast";
	}
	double Cost() {
		return 28.5;
	}
};