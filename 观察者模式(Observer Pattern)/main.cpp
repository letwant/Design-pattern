#include "concrete_observer.h"
#include "concrete_subject.h"
#include <memory>

int main()
{
	// ��������
	unique_ptr<ConcreteSubject> pSubject(new ConcreteSubject());
	unique_ptr<ConcreteObserver> pObserver1(new ConcreteObserver("Jack Ma"));
	unique_ptr<ConcreteObserver> pObserver2(new ConcreteObserver("Pony"));

	// ע��۲���
	pSubject->Attach(pObserver1.get());
	pSubject->Attach(pObserver2.get());

	// ���ļ۸񣬲�֪ͨ�۲���
	pSubject->SetPrice(12.5);
	pSubject->Notify();

	// ע���۲���
	pSubject->Detach(pObserver2.get());
	// �ٴθ���״̬����֪ͨ�۲���
	pSubject->SetPrice(15.0);
	pSubject->Notify();

	getchar();

	return 0;
}