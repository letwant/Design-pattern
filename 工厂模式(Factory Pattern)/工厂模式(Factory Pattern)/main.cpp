#include "concreate_factory.h"
#include "product.h"
#include <iostream>
#include <memory>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

/*
工厂模式适用的一些场景（不仅限于以下场景）：
1. 对象的创建过程/实例化准备工作很复杂，需要初始化很多参数、查询数据库等。
2.类本身有好多子类，这些类的创建过程在业务中容易发生改变，或者对类的调用容易发生改变。
*/

int main()
{
	// 奔驰
	AFactory *pFactory = new BenzFactory();
	ICar *pCar = pFactory->CreateCar(); // 使用基类的好处，可以不用重复定义各个类
	cout << "Benz factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	// 宝马
	pFactory = new BmwFactory();
	pCar = pFactory->CreateCar();
	cout << "Bmw factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	// 奥迪
	pFactory = new AudiFactory();
	pCar = pFactory->CreateCar();
	cout << "Audi factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	getchar();
	return 0;
}
