#pragma once
#include "component.h"

// µ÷Î¶Æ·
class CondimentDecorator : public IBeverage
{
public:
	IBeverage *m_pBeverage;
	CondimentDecorator(IBeverage *beverage) : m_pBeverage(beverage) {}

	string Name() {
		return m_pBeverage->Name();
	}
	double Cost() {
		return m_pBeverage->Cost();
	}
	
};