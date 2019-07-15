//具体实现策略
#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRAGEGY_H

#include "strategy.h"
#include <iostream>

//骑自行车
class BikeStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by bike" << std::endl; }
};

// 开车
class CarStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by car" << std::endl; }
};

// 坐火车
class TrainStrategy : public IStragegy
{
public:
	virtual void Travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif // CONCRETE_STRATEGY_H