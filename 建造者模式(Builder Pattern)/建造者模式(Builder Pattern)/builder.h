#pragma once
#include "product.h"

// �����߽ӿڣ���װ����
class IBuilder
{
public:
	virtual void BuildCpu() = 0;  // ���� CPU
	virtual void BuildMainboard() = 0;  // ��������
	virtual void BuildRam() = 0;  // �����ڴ�
	virtual void BuildVideoCard() = 0;  // �����Կ�
	virtual Computer* GetResult() = 0;  // ��ȡ�����Ĳ�Ʒ
};
