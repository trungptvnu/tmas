/* -*- C++ -*- */

#ifndef _ADD_NODE_CPP_
#define _ADD_NODE_CPP_

#include <iostream>
#include <memory>

#include "Component_Node.h"
#include "Visitor.h"
#include "Composite_Add_Node.h"

// Ctor

Composite_Add_Node::Composite_Add_Node (Component_Node *left,
                    Component_Node *right)
  : Composite_Binary_Node (left, right)
{    
}

int
Composite_Add_Node::item (void) const
{
  return '+';
}

// accept a visitor

void 
Composite_Add_Node::accept (Visitor &visitor) const
{
  visitor.visit (*this);
}

#endif /* _ADD_NODE_CPP_ */
