#pragma once
#include <string>

using namespace std;

// �������ϵĻ���
class IBeverage
{
public:
	virtual string Name() = 0; //����
	virtual double Cost() = 0; //�۸�
};