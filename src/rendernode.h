#pragma once

#include "node.h"
#include <string>

class RenderNode : public AbstractNode
{
public:
	VISITABLE();
	RenderNode(const ModuleInstantiation *mi) : AbstractNode(mi), convexity(1) { }
	virtual std::string toString() const override;
	virtual std::string name() const override { return "render"; }

	int convexity;
};
