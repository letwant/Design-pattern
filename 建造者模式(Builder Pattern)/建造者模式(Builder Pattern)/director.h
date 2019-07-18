#pragma once
#include "builder.h"

// Ö¸»ÓÕß
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
