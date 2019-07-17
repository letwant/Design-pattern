#include "concrete_observer.h"
#include "concrete_subject.h"
#include <memory>

int main()
{
	// 创建主题
	unique_ptr<ConcreteSubject> pSubject(new ConcreteSubject());
	unique_ptr<ConcreteObserver> pObserver1(new ConcreteObserver("Jack Ma"));
	unique_ptr<ConcreteObserver> pObserver2(new ConcreteObserver("Pony"));

	// 注册观察者
	pSubject->Attach(pObserver1.get());
	pSubject->Attach(pObserver2.get());

	// 更改价格，并通知观察者
	pSubject->SetPrice(12.5);
	pSubject->Notify();

	// 注销观察者
	pSubject->Detach(pObserver2.get());
	// 再次更改状态，并通知观察者
	pSubject->SetPrice(15.0);
	pSubject->Notify();

	getchar();

	return 0;
}