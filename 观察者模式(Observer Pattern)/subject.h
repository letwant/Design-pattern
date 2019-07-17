#pragma once

class IObserver;

// ��������
class ISubject
{
public:
	virtual void Attach(IObserver *) = 0; //ע��۲���
	virtual void Detach(IObserver *) = 0; //ע���۲���
	virtual void Notify() = 0; //֪ͨ�۲���
};