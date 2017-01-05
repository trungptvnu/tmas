/* -*- C++ -*- */
#ifndef _NEGATE_NODE_CPP_
#define _NEGATE_NODE_CPP_

#include <iostream>
#include <memory>

#include "Component_Node.h"
#include "Composite_Unary_Node.h"
#include "Visitor.h"
#include "Composite_Negate_Node.h"

// Ctor

Composite_Negate_Node::Composite_Negate_Node (Component_Node *right)
  : Composite_Unary_Node (right)
{    
}

// Dtor
Composite_Negate_Node::~Composite_Negate_Node (void)
{
}

int
Composite_Negate_Node::item (void) const
{
  return '-';
}

// accept a visitor
void 
Composite_Negate_Node::accept (Visitor &visitor) const
{
  visitor.visit (*this);
}

#endif /* _NEGATE_NODE_CPP_ */
