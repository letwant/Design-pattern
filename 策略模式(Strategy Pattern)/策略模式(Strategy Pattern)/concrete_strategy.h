//����ʵ�ֲ���
#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRAGEGY_H

#include "strategy.h"
#include <iostream>

//�����г�
class BikeStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by bike" << std::endl; }
};

// ����
class CarStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by car" << std::endl; }
};

// ����
class TrainStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif // CONCRETE_STRATEGY_H