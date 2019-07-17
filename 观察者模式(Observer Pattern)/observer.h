#pragma once
/*提供一个Update接口，用于更新价格*/
//抽象观察者
class IObserver
{
public:
	virtual void Update(float price) = 0; //更新价格
};
