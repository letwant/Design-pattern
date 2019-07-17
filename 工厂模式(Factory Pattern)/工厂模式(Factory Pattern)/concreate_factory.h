#pragma once
#include "factory.h"
#include "concrete_product.h"

// ���۹���
class BenzFactory : public AFactory
{
public:
	ICar* CreateCar() {
		return new BenzCar();
	}
};

// ������
class BmwFactory : public AFactory
{
public:
	ICar* CreateCar() {
		return new BmwCar();
	}
};

// �µϹ���
class AudiFactory : public AFactory
{
public:
	ICar* CreateCar() {
		return new AudiCar();
	}
};