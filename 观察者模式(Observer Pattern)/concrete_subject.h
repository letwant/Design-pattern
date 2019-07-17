#pragma once

#include "subject.h"
#include "observer.h"
#include <iostream>
#include <list>

using namespace std;

// ��������
class ConcreteSubject : public ISubject
{
public:
	ConcreteSubject() { m_fPrice = 10.0; }

	void SetPrice(float price) { m_fPrice = price; }
	void Attach(IObserver *observer) { m_observers.push_back(observer); }
	void Detach(IObserver *observer) { m_observers.remove(observer); }
	void Notify() {
		list<IObserver *>::iterator it = m_observers.begin();
		while (it != m_observers.end())
		{
			(*it)->Update(m_fPrice);
			++it;
		}
	}
private:
	float m_fPrice; //�۸�
	list<IObserver *> m_observers; //�۲����б�
};