#pragma once
#include "product.h"

// ±¼³ÛÆû³µ
class BenzCar : public ICar
{
public:
	string Name() {
		return "BenzCar";
	}
};

// ±¦ÂíÆû³µ
class BmwCar : public ICar
{
public:
	string Name() {
		return "BwmCar";
	}
};

// °ÂµÏÆû³µ
class AudiCar : public ICar
{
public:
	string Name() {
		return "AudiCar";
	}
};