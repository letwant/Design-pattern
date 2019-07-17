#pragma once
#include "component.h"

// µ÷Î¶Æ·
class CondimentDecorator : public IBeverage
{
public:
	
	CondimentDecorator(IBeverage *beverage) : m_pBeverage(beverage) {}

	string Name() {
		return m_pBeverage->Name();
	}
	double Cost() {
		return m_pBeverage->Cost();
	}
protected:
	IBeverage *m_pBeverage;
	
};