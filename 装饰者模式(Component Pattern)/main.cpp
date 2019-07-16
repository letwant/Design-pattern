#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	/********** ºÚ¿§·È **********/
	unique_ptr<IBeverage> pHouseBlend(new HouseBlend());
	cout << pHouseBlend->Name() << ":" << pHouseBlend->Cost() << endl;

	// ºÚ¿§·È + ÄÌÓÍ
	unique_ptr<CondimentDecorator> pCream(new Cream(pHouseBlend.get()));
	cout << pCream->Name() << ":" << pCream->Cost() << endl;

	// ºÚ¿§·È + Ä¦¿¨
	unique_ptr<CondimentDecorator> pMocha(new Mocha(pHouseBlend.get()));
	cout << pMocha->Name() << ":" << pMocha->Cost() << endl;

	// ºÚ¿§·È + ÌÇ½¬
	unique_ptr<CondimentDecorator> pSyrup(new Syrup(pHouseBlend.get()));
	cout << pSyrup->Name() << ":" << pSyrup->Cost() << endl;

	/********** Éî¶ÈºæÅà¿§·È¶¹ **********/
	unique_ptr<IBeverage> pDarkRoast(new DarkRoast());
	cout << pDarkRoast->Name() << " : " << pDarkRoast->Cost() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ
	unique_ptr<CondimentDecorator> pCreamDR(new Cream(pDarkRoast.get()));
	cout << pCreamDR->Name() << " : " << pCreamDR->Cost() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨
	unique_ptr<CondimentDecorator> pCreamMocha(new Mocha(pCreamDR.get())); //ÕâÀïÀí½âÎªÒ»²ãÒ»²ã¼Ì³Ğ¼´¿É½«¹¦ÄÜµş¼ÓÔÚÒ»Æğ
	cout << pCreamMocha->Name() << " : " << pCreamMocha->Cost() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨ + ÌÇ½¬
	unique_ptr<CondimentDecorator> pCreamMochaSyrup(new Syrup(pCreamMocha.get()));
	cout << pCreamMochaSyrup->Name() << " : " << pCreamMochaSyrup->Cost() << endl;
	getchar();
	return 0;
	
}
