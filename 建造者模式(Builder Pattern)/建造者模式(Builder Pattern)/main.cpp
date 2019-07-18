#include "concrete_builder.h"
#include "director.h"
#include <string>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
	Direcror *pDirecror = new Direcror();
	ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
	YogaBuilder *pYogaBuilder = new YogaBuilder();

	// ��װ ThinkPad��Yoga
	pDirecror->Create(pTPBuilder);
	pDirecror->Create(pYogaBuilder);

	// ��ȡ��װ��ĵ���
	Computer *pThinkPadComputer = pTPBuilder->GetResult();
	Computer *pYogaComputer = pYogaBuilder->GetResult();

	// �������
	cout << "-----ThinkPad-----" << endl;
	cout << "CPU: " << pThinkPadComputer->GetCPU() << endl;
	cout << "Mainboard: " << pThinkPadComputer->GetMainboard() << endl;
	cout << "Ram: " << pThinkPadComputer->GetRam() << endl;
	cout << "VideoCard: " << pThinkPadComputer->GetVideoCard() << endl;

	cout << "-----Yoga-----" << endl;
	cout << "CPU: " << pYogaComputer->GetCPU() << endl;
	cout << "Mainboard: " << pYogaComputer->GetMainboard() << endl;
	cout << "Ram: " << pYogaComputer->GetRam() << endl;
	cout << "VideoCard: " << pYogaComputer->GetVideoCard() << endl;

	SAFE_DELETE(pThinkPadComputer);
	SAFE_DELETE(pYogaComputer);
	SAFE_DELETE(pTPBuilder);
	SAFE_DELETE(pYogaBuilder);
	SAFE_DELETE(pDirecror);

	getchar();

	return 0;
}
