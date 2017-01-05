/* -*- C++ -*- */
#ifndef _DIVIDE_NODE_CPP_
#define _DIVIDE_NODE_CPP_

#include <iostream>
#include <memory>

#include "Composite_Binary_Node.h"
#include "Composite_Divide_Node.h"
#include "Visitor.h"

// Ctor
Composite_Divide_Node::Composite_Divide_Node (Component_Node *left, 
                          Component_Node *right)
  : Composite_Binary_Node (left, right)
{    
}

// Dtor
Composite_Divide_Node::~Composite_Divide_Node (void)
{
}

int
Composite_Divide_Node::item (void) const
{
  return '/';
}

// accept a visitor
void 
Composite_Divide_Node::accept (Visitor &visitor) const
{
  visitor.visit (*this);
}

#endif /* _DIVIDE_NODE_CPP_ */
