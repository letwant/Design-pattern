#pragma once
#include "builder.h"

// ָ����
class Direcror
{
public:
	void Create(IBuilder *builder) {
		builder->BuildCpu();
		builder->BuildMainboard();
		builder->BuildRam();
		builder->BuildVideoCard();
	}
};
