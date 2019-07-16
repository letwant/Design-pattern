#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	/********** �ڿ��� **********/
	unique_ptr<IBeverage> pHouseBlend(new HouseBlend());
	cout << pHouseBlend->Name() << ":" << pHouseBlend->Cost() << endl;

	// �ڿ��� + ����
	unique_ptr<CondimentDecorator> pCream(new Cream(pHouseBlend.get()));
	cout << pCream->Name() << ":" << pCream->Cost() << endl;

	// �ڿ��� + Ħ��
	unique_ptr<CondimentDecorator> pMocha(new Mocha(pHouseBlend.get()));
	cout << pMocha->Name() << ":" << pMocha->Cost() << endl;

	// �ڿ��� + �ǽ�
	unique_ptr<CondimentDecorator> pSyrup(new Syrup(pHouseBlend.get()));
	cout << pSyrup->Name() << ":" << pSyrup->Cost() << endl;

	/********** ��Ⱥ��࿧�ȶ� **********/
	unique_ptr<IBeverage> pDarkRoast(new DarkRoast());
	cout << pDarkRoast->Name() << " : " << pDarkRoast->Cost() << endl;

	// ��Ⱥ��࿧�ȶ� + ����
	unique_ptr<CondimentDecorator> pCreamDR(new Cream(pDarkRoast.get()));
	cout << pCreamDR->Name() << " : " << pCreamDR->Cost() << endl;

	// ��Ⱥ��࿧�ȶ� + ���� + Ħ��
	unique_ptr<CondimentDecorator> pCreamMocha(new Mocha(pCreamDR.get())); //�������Ϊһ��һ��̳м��ɽ����ܵ�����һ��
	cout << pCreamMocha->Name() << " : " << pCreamMocha->Cost() << endl;

	// ��Ⱥ��࿧�ȶ� + ���� + Ħ�� + �ǽ�
	unique_ptr<CondimentDecorator> pCreamMochaSyrup(new Syrup(pCreamMocha.get()));
	cout << pCreamMochaSyrup->Name() << " : " << pCreamMochaSyrup->Cost() << endl;
	getchar();
	return 0;
	
}
