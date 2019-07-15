#pragma once
#include "strategy.h"

class Context
{
public:
	Context(IStragegy *strategy) { m_pStrategy = strategy; }
	void Travel() { m_pStrategy->Travel(); }
private:
	IStragegy *m_pStrategy;
};