#pragma once
#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

// ����۲���
class ConcreteObserver : public IObserver
{
public:
	ConcreteObserver(string name) { m_strName = name; }

	void Update(float price) {
		cout << m_strName << "�۸�Ϊ: " << price << endl;
	}
private:
	string m_strName;
};