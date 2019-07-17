#pragma once
#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

// 具体观察者
class ConcreteObserver : public IObserver
{
public:
	ConcreteObserver(string name) { m_strName = name; }

	void Update(float price) {
		cout << m_strName << "价格为: " << price << endl;
	}
private:
	string m_strName;
};