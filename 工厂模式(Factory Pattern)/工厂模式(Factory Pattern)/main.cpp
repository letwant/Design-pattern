#include "concreate_factory.h"
#include "product.h"
#include <iostream>
#include <memory>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

/*
����ģʽ���õ�һЩ�����������������³�������
1. ����Ĵ�������/ʵ����׼�������ܸ��ӣ���Ҫ��ʼ���ܶ��������ѯ���ݿ�ȡ�
2.�౾���кö����࣬��Щ��Ĵ���������ҵ�������׷����ı䣬���߶���ĵ������׷����ı䡣
*/

int main()
{
	// ����
	AFactory *pFactory = new BenzFactory();
	ICar *pCar = pFactory->CreateCar(); // ʹ�û���ĺô������Բ����ظ����������
	cout << "Benz factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	// ����
	pFactory = new BmwFactory();
	pCar = pFactory->CreateCar();
	cout << "Bmw factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	// �µ�
	pFactory = new AudiFactory();
	pCar = pFactory->CreateCar();
	cout << "Audi factory: " << pCar->Name() << endl;

	SAFE_DELETE(pFactory);
	SAFE_DELETE(pCar);

	getchar();
	return 0;
}
