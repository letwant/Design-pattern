#pragma once
#include "product.h"

// ��������
class BenzCar : public ICar
{
public:
	string Name() {
		return "BenzCar";
	}
};

// ��������
class BmwCar : public ICar
{
public:
	string Name() {
		return "BwmCar";
	}
};

// �µ�����
class AudiCar : public ICar
{
public:
	string Name() {
		return "AudiCar";
	}
};